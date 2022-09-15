#include <stdio.h>
/*
 * Simple Test C file
 */



/**
 * main - The main function
 *
 * Return: 0 -Simple Return
 */
int main(void)
{
	printf("Size of a char: %i byte(s)\n", (int)sizeof(char));
	printf("Size of an int: %i byte(s)\n", (int)sizeof(int));
	printf("Size of a long int: %i byte(s)\n", (int)sizeof(long));
	printf("Size of a long long int: %i byte(s)\n", (int)sizeof(long long));
	printf("Size of a float: %i byte(s)\n", (int)sizeof(float));

	return (0);
}
