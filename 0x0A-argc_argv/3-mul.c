#include <stdlib.h>
#include <stdio.h>
/**
 *main - Program Entry Point
 *@argc: Argument Count
 *@argv: Argument Values
 *
 *Return: 0, usually. 1 on Error
 */
int main(int argc, char *argv[])
{
	int A, B;

	A = atoi(argv[1]);
	B = atoi(argv[2]);
	if (argc == 3)
	{
		printf("%d\n", A * B);
	}
	else
	{
		printf("Error");

		return (1);
	}
	return (0);
}
