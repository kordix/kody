#include <stdio.h>
#include <math.h>

int doskonala(int liczba){
    int sumapodzielnych;
    sumapodzielnych =0;

    for(int i =1;i<liczba;i++){
        if(liczba % i == 0){
            sumapodzielnych += i;
        }
    }

    if(liczba == sumapodzielnych){
        printf("%d to jest liczba doskonala \n",liczba);
    }else {
        //printf("%d to nie jest liczba doskonala",liczba);
    }

    return 0;
}


int main(void) 
{

    for(int i = 0;i<1000;i++){
        doskonala(i);
    }

    return 0;
}


