#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_numbers - Print a string of numbers
 *@seperator: string to split up thenumbers
 *@n: number of numbers listed
 *
 */
void print_numbers(const char *seperator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;

	if (n == 0)
	{
		printf("\n");
		return;
	}
	va_start(args, n);
	printf("%i",va_arg(args,int));
	for (i = 1; i < n; i++)
	{
		printf("%s%i",
		       ((seperator == NULL) ?  "" : seperator),
		       va_arg(args,int));
	}
	printf("\n");
}
