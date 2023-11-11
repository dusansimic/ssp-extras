#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "zameni.h"

void sortiraj(void* niz, int n, size_t size, int compare(const void*, const void*)) {
	int min;
	void* tmp;
	tmp = malloc(size);
	for (int i = 0; i < n - 1; i++) {
		min = i;
		for (int j = i + 1; j < n; j++) {
			int rez = compare(niz + j * size, niz + min * size);
			if (rez < 0) {
				min = j;
			}
		}

		if (i != min) {
			zameni(niz, i, min, size);
		}
	}
	free(tmp);
}
