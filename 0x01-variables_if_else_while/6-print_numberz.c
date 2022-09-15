#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 *main - entry function
 *
 *Return: 0-Standard Return
 */
int main(void)
{
	int out = (int)'0';

	do {
		putchar((char)out);
	} while (out++ < (int)'9');
	putchar('\n');
	/* Space before Return */
	return (0);
}
