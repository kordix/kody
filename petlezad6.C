#include <stdio.h>
// demo2.C - Sample C++ program 
int main(void) 
{

    float tablica[6];
  float najmniejsza = 99999999;
  float najwieksza = 0;


 for(int i = 0;i<6;i++){
     scanf("%f", &tablica[i]);
 }

for(int i = 0;i<6;i++){
  
    if(tablica[i] < najmniejsza){
        najmniejsza = tablica[i];
    }
     
 }

 printf("%f",najmniejsza);

for(int i = 0;i<6;i++){
  
    if(tablica[i] > najwieksza){
        najwieksza = tablica[i];
    }
     
 }

 
 printf("%f",najwieksza);



   // std::cout << "Podaj pierwszy bok prostokata .\n";
   // std::cin >> a;


    return 0;
}
