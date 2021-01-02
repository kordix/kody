#include <stdio.h> 
#include <cstring> 

int prostokat(int szerokosc, int wysokosc){ 


    for(int i=0;i<wysokosc;i++){

        if(i==0 || i == wysokosc - 1){
            for(int i=0;i<szerokosc;i++){
                printf("*");
            }
        }else {
            for(int i=0;i<szerokosc;i++){
                if(i == 0 || i == szerokosc - 1 ){
                printf("*");
                }else{
                    printf(" ");
                }
            }
        }

        printf("\n");
    }

   return 0;
} 

int owalgora(int szerokosc, int wysokosc){
    int i =0;
    int j = 0;

    for(int i=0;i<(wysokosc);i++){
        if(1==1){
            //printf("%d",szerokosc / 2 - (i + 1));

            for(int j=0;j<= (szerokosc) - (i + 1);j++){
                printf(" ");
            }

            printf("*");

            for(int k = 0; k<i;k++){
                printf(" ");
                printf(" ");

            }

            printf("*");

            for(int j=0;j<=szerokosc -(i + 1);j++){
                printf(" ");
            }
             printf("\n");
           
        }else {
             printf("\n");
        }
    }

    return 0;

}

int owaldol(int szerokosc, int wysokosc){
    int i =0;
    int j = 0;

    for(int i=(wysokosc);i>0;i--){
        if(1==1){
             

            for(int j=(szerokosc) - (i) + 1;j > 0 ;j--){
                printf(" ");
            }

            printf("*");

            for(int k = 1; k<i;k++){
                printf(" ");
                printf(" ");

            }

            printf("*");

            for(int j= (szerokosc) -(i + 4);j>0;j--){
             //   printf(" ");
            }
             printf("\n");
           
        }else {
             printf("\n");
        }
    }

    return 0;

}


int strzalka(int szerokosc,int wysokosc){
    
    for(int i =0;i<szerokosc;i++){
        for(int j = (szerokosc - 1) - i;j>0;j--){   
            printf(" ");
        }

        for(int j = 0;j < 1 + i * 2;j++){
            printf("*");
        }

        for(int j = 2 - i;j>0;j--){   
            printf(" ");
        }
        printf("\n");

    }

    for(int i = 0;i<wysokosc - szerokosc;i++){
        for(int i = 0 ;i<szerokosc - 1;i++){
            printf(" ");
        } 

        printf("*");

        for(int i  = 0 ;i<szerokosc - 1;i++){
            printf(" ");
        } 
        printf("\n");
    }

    return 0;

}

 
int main() 
{ 
    //owalgora(3,3);   
    //owaldol(3,3);   
    strzalka(4,8);
    return 0; 
} 
