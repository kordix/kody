#include <stdio.h> 

int main(void)
{
           int liczba[3];

   for (int i=0;i<3;i++)
    {
            scanf("%d", &liczba[i]);
            
    }
   
    for(int j=2; j>=0;j--)
    {
        printf("%d", &liczba[j]);
             
    }
     return 0;
   
}