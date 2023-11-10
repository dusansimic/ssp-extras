#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void sortiraj(void* niz, int n, size_t size, int compare(const void*, const void*)) {
	int min;
	void* tmp;
	tmp = malloc(size);
	for (int i = 0; i < n - 1; i++) {
		min = i;
		for (int j = i + 1; j < n; j++) {
			int rez = compare(niz + j, niz + min);
			if (rez < 0) {
				min = j;
			}
		}

		// ne radi razmenu mamu mu jebem ne znam zasto
		if (i != min) {
			memcpy(tmp, niz + i, size);
			memcpy(niz + i, niz + min, size);
			memcpy(niz + min, tmp, size);
		}
	}
	free(tmp);
}
