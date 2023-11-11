#include <stdlib.h>
#include <string.h>

void zameni(void* niz, size_t o1, size_t o2, size_t size) {
	void* tmp;
	tmp = malloc(size);
	memcpy(tmp, niz + o1 * size, size);
	memcpy(niz + o1 * size, niz + o2 * size, size);
	memcpy(niz + o2 * size, tmp, size);
	free(tmp);
}
