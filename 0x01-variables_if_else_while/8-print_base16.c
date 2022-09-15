#include <stdio.h>

/**
 *main - entry function
 *
 *Return: 0-Standard Return
 */
int main(void)
{
	char out = ('0' - 1);

	while (out++ < '9')
		putchar(out);
	out = ('a' - 1);
	while (out++ < 'f')
		putchar(out);
	putchar('\n');
	/* Space before Return */
	return (0);
}
