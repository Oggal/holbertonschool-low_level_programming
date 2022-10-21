#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_strings - Print a string of strings
 *@seperator: string to split up the strings
 *@n: number of numbers listed
 *
 */
void print_strings(const char *seperator, const unsigned int n, ...)
{
	va_list args;
	char *holder;
	unsigned int i;

	if (n == 0)
	{
		printf("\n");
		return;
	}
	va_start(args, n);
	holder = va_arg(args, char *);
	printf("%s", (holder == NULL) ? "(nil)" : holder);
	for (i = 1; i < n; i++)
	{
		holder = va_arg(args, char *);
		printf("%s%s",
		       ((seperator == NULL) ?  "" : seperator),
		       ((holder == NULL) ? "(nil)" : holder));
	}
	printf("\n");
}
