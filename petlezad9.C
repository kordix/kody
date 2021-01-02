#include <stdio.h>
#include <stdlib.h>

int main (int argc, char *argv[]){
    FILE *in_handle;
    char bufor[BUFSIZ];
    unsigned int ui,uilocal;
    double x,y,xlocal,ylocal;
    double roznica;
    double stokm;
    ui = 0;
    x = 0;
    y = 0;
    in_handle = fopen(argv[1],"r");
    while(fgets(bufor, BUFSIZ, in_handle) != NULL ){
        

        if(ui == 0){
            printf("%s","pierwsza linia \n");
            sscanf(bufor, "%u %lf %lf", &ui, &x, &y);

        }else{
            sscanf(bufor, "%u %lf %lf", &uilocal, &xlocal, &ylocal);
            roznica = uilocal - ui;
            printf("Przejechano %lf km",roznica);
            printf("\n");

            stokm = x * 100 / roznica;
              printf("Pali na sto %lf l",stokm);
                printf("\n");
               printf("Za 100 km placisz %lf",stokm * y);
                printf("\n");

            ui = uilocal;
            x = xlocal;
            y = ylocal;
        }

        //sscanf(bufor, "%u %lf %lf", &ui, &x, &y);
        //printf("--> %d %.2f %.2f\n", ui, x,y);
    }
   if (fclose(in_handle)) { printf("error closing file."); exit(-1); }
}


/*
main() {
   FILE *fp;

   fp = fopen("./test.txt", "w+");
   fprintf(fp, "This is testing for fprintf...\n");
   fputs("This is testing for fputs...\n", fp);
   fclose(fp);
}

*/