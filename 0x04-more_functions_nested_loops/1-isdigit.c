#include "main.h"

/**
 * _isdigit - Return if char value of c is digit
 *@c: Value to check
 *
 *Return: 1 if digit, otherwise 0
 */
int _isdigit(int c)
{
	return (0 + (c >= '0' && c <= '9'));
}
