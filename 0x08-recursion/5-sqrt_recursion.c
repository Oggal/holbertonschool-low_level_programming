#include "main.h"

/**
 *_sqrt_recursion - Find natural Square root
 *@n: Number to Find Sqrt
 *
 *Return: -1 on fail; Otherwise, sqrt
 */
int _sqrt_recursion(int n)
{
	int sqr;

	sqr = try_find_root(n, 0);
	if (sqr * sqr == n)
		return (sqr);
	return (-1);
}

/**
 *try_find_root - Look For Sqrt
 *@x: number checking
 *@i: Number of checks
 *
 *Return: Number of checks
 */
int try_find_root(int x, int i)
{
	if (x <= 0)
		return (i);
	return (try_find_root(x - ((2 * i) + 1), i + 1));
}
