#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
	int* a;
	a = malloc(sizeof(int));
	scanf("%d", a);
	printf("%d\n", *a);
	void* b = (void*) a;
	void* c;
	c = malloc(sizeof(int));
	memcpy(c, b, sizeof(int));
	int* d = (int*) c;
	printf("%d\n", *d);
	free(a);
	free(c);
	return 0;
}
