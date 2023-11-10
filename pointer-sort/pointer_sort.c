#include <stdio.h>
#include <stdlib.h>

void sortiraj(int*, int, int**);

int main() {
	int n;
	scanf("%d", &n);

	int* niz;
	int** pniz;
	niz = malloc(n * sizeof(int));
	pniz = malloc(n * sizeof(int*));

	for (int i = 0; i < n; i++) {
		scanf("%d", niz + i);
	}

	sortiraj(niz, n, pniz);

	for (int i = 0; i < n; i++) {
		printf(" %d", **(pniz + i));
	}

	printf("\n");

	free(niz);
	free(pniz);
	return 0;
}

void sortiraj(int* niz, int n, int** pniz) {
	int min; // promenljiva za indeks sledeceg najmanjeg elementa
	int* mark; // niz oznacenih elemenata koji su vec sortirani
	// alociramo sa calloc kako bismo dobili niz ispunjen nulama
	mark = calloc(n, sizeof(int));

	// spoljna petlja nam pravi granicu izmedju soritranog i nesortiranog
	// dela niza. ovo je fakticki selection sort
	for (int i = 0; i < n; i++) {
		// na pocetku trazenja sledeceg najmanjeg elementa, postavljamo
		// indeks na -1
		min = -1;
		for (int j = 0; j < n; j++) {
			// trazimo u celom nizu sledeci najmanji element koji
			// nije vec sortiran
			if (*(mark + j) == 0) {
				// ukoliko smo prvi put naisli na element koji
				// nije posecen ili je neki element koji je
				// manji od trenutnog najmanjeg elementa,
				// uzimamo novi najmanji element
				if (min == -1 || (*(niz + j) < *(niz + min))) {
					min = j;
				}
			}
		}
		// cuvamo na sledecem mestu indeks od novom najmanjeg elementa
		*(pniz + i) = niz + min;
		// markiramo taj element u nizu da je sortiran
		*(mark + min) = 1;
	}

	free(mark);
}
