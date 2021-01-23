#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int main(int argc, char *argv[]) {
	double *(*tab[10])[5];
	memset(tab, 0, sizeof(tab));

	srand(time(0));
	int i;
	for (i = 0; i < 7; i++) {
		int x, y;
		double a, b;
		x = rand() % 10;
		y = rand() % 5;
		a = (double) rand();
		b = (double) rand();

		if (tab[x] == NULL) {
			tab[x] = (double *(*)[5]) calloc(5, sizeof(tab[x]));
		}

		if ((*tab[x])[y] == NULL) {
			(*tab[x])[y] = (double *) calloc(5, sizeof(tab[x][y]));
		}

		*(*tab[x])[y] = a/b;
	}

	for (i = 0; i < 10; i++) {
		int j;

		if (tab[i] == NULL) {
			printf("tab[%d] = <null>\n", i);
			continue;
		}

		for (j = 0; j < 5; j++) {
			printf("*(*tab[%d])[%d] = ", i, j);
			if ((*tab[i])[j] == NULL) {
				printf("<null>\n");
			} else {
				printf("%f\n", *(*tab[i])[j]);
			}
		}
	}

	return 0;
}
