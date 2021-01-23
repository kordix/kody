#include <stdio.h>
// demo2.C - Sample C++ program 
int main(void) 
{

    int tablica[5];


 for(int i = 0;i<5;i++){
     scanf("%d", &tablica[i]);
 }


 for(int j = 4;j>=0;j--){
     printf("%d",tablica[j]);
 }



   // std::cout << "Podaj pierwszy bok prostokata .\n";
   // std::cin >> a;


    return 0;
}
