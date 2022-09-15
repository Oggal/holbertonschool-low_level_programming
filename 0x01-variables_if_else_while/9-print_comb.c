#include <stdio.h>

/**
 *main - entry function
 *
 *Return: 0-Standard Return
 */
int main(void)
{
	int out = ('0' - 1);

	while (out++ < '9')
	{
		putchar(out);
		if (out == '9')
			break;
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	/* Space before Return */
	return (0);
}
