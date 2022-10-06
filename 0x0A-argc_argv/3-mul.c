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
	int i;

	if (argc == 3)
	{
		printf("%d\n",argv[1] * argv[2]);
	}
	else
	{
		printf("Error");

		return (1);
	}
	return (0);
}
