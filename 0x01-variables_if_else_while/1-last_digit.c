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
	int n;
	int lastD;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lastD = abs(n % 10);
	if (lastD == 0)
		printf("Last digit of %i is %i and is 0\n", n, lastD);
	else if (lastD < 6)
		printf("Last digit of %i is %i and is less than 6 and not 0\n", n, lastD);
	else
		printf("Last digit of %i is %i and is greater than 5\n", n, lastD);
	/* Space before Return */
	return (0);
}
