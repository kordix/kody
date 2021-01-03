#include <stdio.h>
#include <stdlib.h>
#include <cstring>

using namespace std;

int euklides(int n, int k)
{
    if (n == k)
    {
        printf("NWD: %d", n);
        return 0;
    }

    if (n > k)
    {
        n = n - k;
    }

    if (k > n)
    {
        k = k - n;
    }

    //printf("%d %d \n", n, k);

    euklides(n, k);
}

int main()
{
    int n, k;

    printf("Podaj pierwsza liczbe \n");
    scanf("%d", &n);

    printf("Podaj druga liczbe \n");
    scanf("%d", &k);

    euklides(n, k);
}