#ifndef OGG_MAIN
#define OGG_MAIN

#include <stdio.h>
#include <stddef.h>
int _putchar(char);

unsigned int binary_to_uint(const char *b);

void print_binary(unsigned long int n);
int get_bit(unsigned long int n, unsigned int index);

#endif
