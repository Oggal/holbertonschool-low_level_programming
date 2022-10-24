#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_all -Print based on format string
 * @format: Formating string to print items with
 *
 */
void print_all(const char * const format, ...)
{
	va_list args;
	char out[] = "%_";
	int i = 0;

	va_start(args, format);

	while (format[i])
	{
		out[1] = format[i];
		switch (format[i])
		{
		case 'i':
		        if (i != 0)
				printf(", ");
		        printf(out, va_arg(args, int));
			break;
		case 'c':
		        if (i != 0)
				printf(", ");
			printf(out, va_arg(args, int));
			break;
		case 'f':
		        if (i != 0)
				printf(", ");
			printf(out, va_arg(args, double));
			break;
		case 's':
		        if (i != 0)
				printf(", ");
			printf(out, va_arg(args, char *));
			break;
		}
	
		i++;
	}
	va_end(args);
	printf("\n");
}
