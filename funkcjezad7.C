#include <time.h>
#include <stdlib.h>
#include <stdio.h>

int main()
{
  srand(time(NULL));
  int r1 = 0;
  int r2 = 0;

  int wynik = 0;
int proby = 5;

int probyudane = 0;
int probynieudane = 0;

  int liczbauser;



  for (int i =0;i<5;i++)
  {

    r1 = rand() % 10;
    r2 = rand() % 10;
    wynik = r1 * r2;

  printf("Ile jest %d razy %d?", r1, r2);
  printf("\n");
  scanf("%d", &liczbauser);

  wynik = r1 * r2;

    if (liczbauser > wynik)
    {
      printf("twoja liczba jest za duza \n");
      probynieudane++;
      //scanf("%d", &liczbauser);
    }
    else if (liczbauser < wynik)
    {
      printf("twoja liczba jest za mala \n");
      probynieudane++;
      //scanf("%d", &liczbauser);
    }
    else if (liczbauser == wynik)
    {
      printf("Gratulacje, zgadles \n)");
      probyudane++;
    //   return 0;
    }
  
}

printf("Mialeś %d prob, %d udane, %d nieudane",proby,probyudane,probynieudane);


  return 0;
}
