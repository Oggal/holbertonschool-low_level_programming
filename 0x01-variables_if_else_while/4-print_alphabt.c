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
	char out = ('a' - 1);

	while (out++ < 'z')
	{
		if (out == 'e' || out == 'q')
			continue;
		putchar(out);
	}
	putchar('\n');
	/* Space before Return */
	return (0);
}
