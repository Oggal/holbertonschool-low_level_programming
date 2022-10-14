#ifndef OGG_HEAD
#define OGG_HEAD

#include <stddef.h>
#include <stdlib.h>

void *malloc_checked(unsigned int b);
void *_calloc(unsigned int unemb, unsigned int size);

char *string_nconcat(char *s1, char *s2, unsigned int n);

int *array_range(int min, int max);
int _putchar(char);

#endif
