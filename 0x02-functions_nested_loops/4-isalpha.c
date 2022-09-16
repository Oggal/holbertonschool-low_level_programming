#include "main.h"
#include "holberton.h"

/**
 *_isalpha - check is a char is letter
 *@c: int, char to check
 *
 *Return: 0 not a leter
 *         1 is a leter
 */
int _isalpha(int c)
{
	if ((c > 'A' && c < 'Z') || (c > 'a' && c < 'z'))
	{
		return (1);
	}
	return (0);
}
