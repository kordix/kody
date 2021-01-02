#include <stdio.h>
#include <math.h>

int silnia(int liczba){
    int wynik = 1;


    for(int i = liczba;i >0 ; i--){

        wynik = wynik * i;
    }

    printf("%d",wynik);
    
    return 0;

}


int main(void) 
{

for(int i=1;i<=10;i++){
    silnia(i);
    printf("\n");
}

    return 0;
}


