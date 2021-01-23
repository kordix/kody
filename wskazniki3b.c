#include <stdio.h>
#include <stdlib.h>
#include <getopt.h>

static struct option long_options[] = {
	{"lines",   required_argument, 0, 'n'},
	{"author",  no_argument,       0, 'a'},
	{"help",    no_argument,       0, 'h'},
	{"version", no_argument,       0, 'v'},
	{0,         0,                 0, 0  }
};

int main(int argc, char *argv[]) {
	char **n_ostatnich = NULL;
	int n = 10;
	int c = 0;

	while (1) {
		c = getopt_long(argc, argv, "n:ahv", long_options, NULL);
		if (c == -1) break;

		switch (c) {
		case 'n':
			n = atoi(optarg);
			if (n < 0) n = 0;
			printf("n = %d\n", n);
			break;
		// TODO: pozostałe
		default:
			break;
		}
	}

	if (n == 0)
		return 0;

	// TODO: nazwa pliku jako argument?
	FILE *f = fopen("test.txt", "r");
	if (f == NULL) {
		printf("Brak pliku test.txt\n");
		return 1;
	}

	n_ostatnich = (char **)calloc(n, sizeof(n_ostatnich[0]));
	if (n_ostatnich == NULL) {
		printf("Nie mogę zaalokować pamięci\n");
		return 1;
	}

	int i = 0;
	while (1) {
		char *linia;

		if (i < n)
			i++;

		linia = (char *)malloc(256);
		// TODO: sprawdzić czy malloc sie udał

		if (fgets(linia, 255, f) == NULL) {
			// Koniec pliku albo błąd
			free(linia);
			break;
		}

		free(n_ostatnich[0]);
		int j;
		for (j = n - i; j < n - 1; j++) {
			n_ostatnich[j] = n_ostatnich[j + 1];
		}

		n_ostatnich[n - 1] = linia;
	}

	for (i = 0; i < n; i++) {
		if (n_ostatnich[i] != NULL) {
			printf("%s", n_ostatnich[i]);
			free(n_ostatnich[i]);
		}
	}

	free(n_ostatnich);
	return 0;
}
