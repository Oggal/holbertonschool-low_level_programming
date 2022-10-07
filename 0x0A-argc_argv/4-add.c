#include <stdlib.h>
#include <stdio.h>

/**
 *main - Program Entry, Going to Sum some ints
 *@argc: Argument Count
 *@argv: Argument Values
 *
 *Return: 0, unless error then 1
 */
int main(int argc, char *argv[])
{
	int sum, i, j;
	char *myString;

	sum = 0;
	for (i = 1; i < argc; i++)
	{
		myString = *(argv + i);
		for (j = 0; myString[j]; j++)
		{
			if (myString[j] < '0' || myString[j] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[i]);
	}
	printf("%i\n", sum);

	return (0);
}
