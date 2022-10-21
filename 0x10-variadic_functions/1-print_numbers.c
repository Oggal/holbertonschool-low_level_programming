#include "variadic_functions.h"
#include <stdarg.h>

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
	printf("%i"va_arg(args,int));
	for (int i = 1; i < n; i++;)
	{
		printf("%s%i",
		       ((seperator == null) ?  "" : seperator),
		       va_args(args,int));
	}
	printf("\n");
}
