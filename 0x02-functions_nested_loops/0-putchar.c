#include "main.h"
/**
 *main - Program Entry
 *
 *Return: 0 - Program Termination
 */
int main(void)
{
	char str[] = "_putchar\n";
	int count = sizeof(str) / sizeof(str[0]);
	int i;

	for (i = 0; i < (count-1); i++)
	{
	_putchar(str[i]);
	}
	/*Prepare to Return*/
	return (0);
}
