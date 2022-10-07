#ifndef OGGAL
#define OGGAL

/*Standard Incudes*/
#include <stddef.h>
#include <stdlib.h>
/*Provided Methods*/
int _putchar(char);
/*Project Methods*/
char *create_array(unsigned int size, char c);
char *_strdup(char *str);
char *str_concat(char *s1, char *s2);

int **alloc_grid(int w, int h);

#endif
