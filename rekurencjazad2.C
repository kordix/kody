#include <stdio.h>
#include <stdlib.h>

using namespace std;

int silnia(int n)
{

    if (n == 1)
        return 1;

    return n * silnia(n- 1);
}

int main()
{
    int n;
    int k;


    printf("Podaj gorny dwumian: ");
    scanf("%d", &n);

    printf("Podaj dolny dwumian: ");
    scanf("%d", &k);

     printf("Dwumian newtona %d %d wynosi %d", n, k, silnia(n) / (silnia(n - k) * silnia(k)) );

    return 0;
}