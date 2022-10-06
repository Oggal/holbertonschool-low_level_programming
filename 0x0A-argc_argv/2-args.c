#include <stdio.h>

/**
 *main - Program Entry Point
 *@argc: Argument Count
 *@argv: Argument Values
 *
 *Return: 0, Always
 */
int main(int argc, char *argv[])
{
	int i;
	for (i = 0; i < argc; i++)
		printf("%s\n", *(argv + i));

	return (0);
}
