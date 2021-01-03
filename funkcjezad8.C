#include <time.h>
#include <stdlib.h>
#include <stdio.h>

int guess(int dobrze){
    int liczba = rand() % 3;

    if(dobrze == 1){

    switch(liczba){
        case 0:
            printf("Bardzo dobrze!\n");
            break;
        case 1:
            printf("Swietnie!\n");
            break;

        case 2:
            printf("Dobra robota!\n");
            break;

    }

    }

    if(dobrze == 0){

        switch(liczba){
            case 0:
                printf("Zla odpowiedz\n");
                break;
            case 1:
                printf("Oj nieodbrze\n");
                break;
            case 2:
                printf("Nastepnym razem pojdzie ci lepiej\n");       
                break;
        }

    }

    return 0;
}



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



  for (int i =0;i<proby;i++)
  {

    r1 = rand() % 10 + 1;
    r2 = rand() % 10 + 1;
    wynik = r1 * r2;
 

  printf("Ile jest %d razy %d?", r1, r2);
  printf("\n");
  scanf("%d", &liczbauser);

    if (liczbauser == wynik)
    {
      guess(1);  
      probyudane++;
    }
    else
    {
      guess(0);
      probynieudane++;
    }  
  
}

printf("Mialeś %d prob, %d udane, %d nieudane",proby,probyudane,probynieudane);


  return 0;
}
