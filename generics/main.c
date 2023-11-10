#include <stdio.h>
#include <stdlib.h>
#include "sort.h"
#include "comp-int.h"
#include "comp-float.h"

int main() {
	int n;
	scanf("%d", &n);

	int* niz;
	niz = malloc(n * sizeof(int));
	for (int i = 0; i < n; i++) {
		scanf("%d", niz + i);
	}

	sortiraj(niz, n, sizeof(int), compare_int);

	for (int i = 0; i < n; i++) {
		printf(" %d", *(niz + i));
	}
	printf("\n");

	free(niz);

	float* fniz;
	fniz = malloc(n * sizeof (float));
	for (int i = 0; i < n; i++) {
		scanf("%f", fniz + i);
	}

	sortiraj(fniz, n, sizeof(float), compare_float);

	for (int i = 0; i < n; i++) {
		printf("%f", *(fniz + i));
	}
	printf("\n");

	free(fniz);

	return 0;
}
