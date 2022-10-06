#include <stdio.h>

/**
 *main - Program Entry Point
 *@argc: Argument Count
 *@argv: Argument Values
 *
 *Return: 0, Always
 */
int main(int argc, __attribute__((unused))char *argv[])
{
	printf("%d\n", argc - 1);

	return (0);
}
