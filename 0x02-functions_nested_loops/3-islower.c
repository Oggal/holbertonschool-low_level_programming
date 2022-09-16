#include "main.h"


/**
 *_islower - return if is lower
 *@c: Char to test( as int)
 *Return: 1 - c is lower
 *        0 - c is not lower
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
