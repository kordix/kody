#include <stdio.h>
#include <limits.h>

int tab[4] = {555, 1568789, -84655, 11};

int main(int argc, char *argv[]) {
	//deklaracja tablicy wskaźników
	int *ptab[4]= {NULL, NULL, NULL, NULL};
	int min;

	//deklarujemy liczbę jako największą tak żeby potem znaleźć liczby mniejsze
	min = INT_MAX;

	int i;

	//znalezienie najmniejszej liczby
	for (i = 0; i < 4; i++) {
		if (tab[i] < min) {
			min = tab[i];
			//element wskaźnika wskazuje na adres pamięci danego elementu tablicy
			ptab[0] = &tab[i];
		}
	}

	//znalezienei drugiej najmniejszej liczby
	min = INT_MAX;
	for (i = 0; i < 4; i++) {
		if (tab[i] < min && tab[i] >= *ptab[0] && &tab[i] != ptab[0]) {
			min = tab[i];
			ptab[1] = &tab[i];
		}
	}

	//znalezienie trzeciej najmniejszej liczby
	min = INT_MAX;
	for (i = 0; i < 4; i++) {
		if (tab[i] < min && tab[i] >= *ptab[1] && &tab[i] != ptab[1]) {
			min = tab[i];
			ptab[2] = &tab[i];
		}
	}

	min = INT_MAX;
	for (i = 0; i < 4; i++) {
		if (tab[i] < min && tab[i] >= *ptab[2] && &tab[i] != ptab[2]) {
			min = tab[i];
			ptab[3] = &tab[i];
		}
	}

	printf("tab = {%d, %d, %d, %d}\n", tab[0], tab[1], tab[2], tab[3]);
	printf("ptab = {%p, %p, %p, %p}\n", ptab[0], ptab[1], ptab[2], ptab[3]);
	printf("*ptab = {%d, %d, %d, %d}\n", *ptab[0], *ptab[1], *ptab[2], *ptab[3]);
	return 0;
}
