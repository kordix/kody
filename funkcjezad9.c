#include <time.h>
#include <stdlib.h>
#include <stdio.h>

int main()
{
  srand(time(NULL));
  int r = rand();
  int liczba;

  printf("%d", r);
  printf("\n");
  scanf("%d", &liczba);

  while (liczba != r)
  {

    if (liczba > r)
    {
      printf("twoja liczba jest za duza \n");
      scanf("%d", &liczba);
    }
    else if (liczba < r)
    {
      printf("twoja liczba jest za mala \n");
      scanf("%d", &liczba);
    }
    else if (liczba == r)
    {
      printf("Gratulacje, zgadles");
      return 0;
    }
  }

  printf("Gratulacje, zgadles");

  return 0;
}
