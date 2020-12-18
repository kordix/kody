#include "iostream"
// demo2.C - Sample C++ program 
int main(void) 
{
    int a;
 int b;

 int pole;


    std::cout << "Podaj pierwszy bok prostokata .\n";
    std::cin >> a;
    std::cout << "Podaj drugi bok prostokata. \n";
    std::cin >> b;

    pole = a * b;
    std::cout << pole;
    
   std::cout << "\n";   

    return 0;
}
