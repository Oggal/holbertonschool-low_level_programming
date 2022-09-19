#include "main.h"
#include <stdio.h>

/**
 *print_to_98
 *@start:Starting point on our way to 98
 *Return: void
 */
void print_to_98(int start)
{
	printf(start);
	while (start != 98)
	{
		if (start > 98)
			start--;
		else
			start++;
		printf(", %i",start);
	}
}
