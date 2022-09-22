#include <stdio.h>

/**
 *main - Start Here!
 *
 *
 *Return: 0, always
 */
int main(void)
{
	int i, o;

	for (i = 1; i <= 100; i++)
	{
		if (i != 1)
			printf(" ");
		o = 0;
		if (!(i % 3))
		{
			o++;
			printf("Fizz");
		}
		if (!(i % 5))
		{
			o++;
			printf("Buzz");
		}
		if (!o)
			printf("%i", i);
	}
	printf("\n");
}
