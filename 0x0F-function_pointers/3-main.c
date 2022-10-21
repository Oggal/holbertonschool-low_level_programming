#include "3-calc.h"

/**
 * main - Program Entry
 * @argCount: number of arguments, including program name
 * @argValue: String Value of Arguments
 *
 * Return: 0 on sucsess, 98-100 on error
 */
int main(int argCount, char *argValue[])
{
	int (*f)(int, int);
	int result;

	if (argCount != 4)
	{
		printf("ERROR\n");
		return (98);
	}

	f = get_op_func(argValue[2]);
	if (f == NULL)
	{
		printf("ERROR\n");
		return (99);
	}

	result = f(atoi(argValue[1]), atoi(argValue[3]));
	printf("%i\n", result);

	return (0);
}
