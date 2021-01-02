#include <stdio.h>
#include <stdlib.h>

void skaluj(int liczba, int skala)
{

    if (liczba == 1)
    {

        for(int i=0; i < skala;i++){
            printf("-");
        }

        printf("\n");

    for(int i=0; i < skala;i++){

        for(int i=0; i < skala;i++){
            printf(" ");
        }

 
        printf("|");
        printf("\n");
         for(int i=0; i < skala;i++){
            printf(" ");
        }
            printf("|");
        printf("\n");
          for(int i=0; i < skala;i++){
            printf(" ");
        }
            printf("|");
            printf("\n");
    }

    }


    if (liczba == 2)
    {

        for(int i=0; i < skala;i++){
            printf("-");
        }

        printf("\n");

    for(int i=0; i < skala;i++){
        for(int i=0; i < skala;i++){
            printf(" ");
        }
        printf("|");   
        printf("\n") ;
    }



    for(int i=0; i < skala;i++){
            printf("-");
        // printf("-");    
    }

        printf("\n");    

    for(int i=0; i < skala;i++){
            printf("|");

            
        printf("\n");    
    }

    for(int i=0; i < skala;i++){
            printf("-");
    }

     printf("\n"); 


    







    }
}

int main(int argc, char *argv[])
{

    int l, w;

    if (argc == 2)
    {
        l = atoi(argv[1]);
        w = 1;
    }
    else if (argc == 3)
    {
        l = atoi(argv[1]);
        w = atoi(argv[2]);
    }

    skaluj(l, w);

    return 0;
}
