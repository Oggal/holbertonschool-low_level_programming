#include "variadic_functions.h"
#include <stdarg.h>
/**
 *sum_them_all - sum n numbers
 *@n: number of int provided
 *
 * Return: sum of listed int
 */
int sum_them_all(const unsigned int n, ...)
{
	int sum = 0;
	unsigned int i;
	va_list args;

	if (n == 0)
		return (0);
	va_start(args, n);
	for (i = 0; i < n; i++)
		sum += va_arg(args, int);
	va_end(args);

	return (sum);
}
