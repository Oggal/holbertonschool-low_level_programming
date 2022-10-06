#include "main.h"

/**
 *factorial - Calculate Factorial
 *@n: Value to Calculate
 *
 * Return: Factorial Calulated
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
