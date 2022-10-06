#include "main.h"

/**
 *_strlen_recursion - Find String Length,
 *@s: String to count
 *
 * Return: Length of String
 */
int _strlen_recursion(char *s)
{
	if (!*s)
		return (0);
	return (1 + _strlen_recursion(s + 1));
}
