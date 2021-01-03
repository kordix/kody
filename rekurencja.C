#include <stdio.h>
#include <stdlib.h>

using namespace std;

long long suma(int n)
{
	if(n<1) 
		return 0;
	
	return n+suma(n-1);
}

int main()
{
	int n;
	
	printf("Podaj liczbę: ");
	scanf("%d", n);
	
	printf("Suma %d kolejnych liczb naturalnych wynosi %d \n",n,suma(n));

	//system("pause");
	return 0;
}