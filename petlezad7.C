#include <stdio.h>


int main(void) 
{

    float tablica[6];
  int dodatnie = 0;

 for(int i = 0;i<6;i++){
     scanf("%f", &tablica[i]);
 }

for(int i = 0;i<6;i++){
  
    if(tablica[i] > 0){
        dodatnie++;
    }
     
 }

 printf("%d",dodatnie);



   // std::cout << "Podaj pierwszy bok prostokata .\n";
   // std::cin >> a;


    return 0;
}
