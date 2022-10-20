#ifndef FUNC_POINT_H
#define FUNC_POINT_H

#include <stddef.h>
#include <stdlib.h>

int _putchar(char);

void print_name(char *name, void (*f)(char *));
void array_iterator(int *array, size_t size, void (*action)(int));

#endif
