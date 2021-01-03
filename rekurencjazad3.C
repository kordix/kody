#include <stdio.h>
#include <stdlib.h>
#include <cstring>


using namespace std;

char ciagznakow[] = "Ala ma kota"; 


int odwroc(int n)
{
    
    if (n < 0)
        return 0;

    printf("%c",ciagznakow[n]);

    n= n - 1;
    odwroc(n);
    return 0 ;
}


int main()
{
 
    odwroc(strlen(ciagznakow) - 1);
    
   
    return 0;
}