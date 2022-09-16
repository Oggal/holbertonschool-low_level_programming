#include "_putchar.c"

/**
 *main - Program Entry
 *
 *Return: 0 - Program Termination
 */
int main(void)
{
	char str[] = "_putchar";
	int count = sizeof(str) / sizeof(str[0]);

	for (int i = 0; i < count; i++)
	{
	_putchar(str[i]);
	}
	_putchar('\n');
	/*Prepare to Return*/
	return (0);
}
