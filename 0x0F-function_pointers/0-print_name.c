#include "function_pointers.h"

/**
 * print_name - print a name with function f
 *@name: Name to print;
 *@f: function to print name with
 *
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
