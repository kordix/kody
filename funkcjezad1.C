#include <stdio.h>
#include <math.h>

int przeciwprostokatna(double a,double b){
    double wynik;
    wynik = sqrt(pow(a,2) + pow(b,2));
    printf("%f",wynik);
    printf("\n");



    return 0;
}


int main(void) 
{

 int a,b;

przeciwprostokatna(3,4);
przeciwprostokatna(5,5);
przeciwprostokatna(1,6);



    return 0;
}


