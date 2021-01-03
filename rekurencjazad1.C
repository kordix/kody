#include <stdio.h>
#include <stdlib.h>

using namespace std;

int potega(int n, int k)
{

    if (k == 1) return n;    

	return n*potega(n,k-1);
}

int main()
{
	int n;
    int k;
	
	printf("Podaj liczbe: ");
    	scanf("%d", &n);
	printf("Podaj potege: ");
    	scanf("%d", &k);


	
	printf("Potega %d do %d wynosi %d",n,k,potega(n,k));

	//system("pause");
	return 0;
}