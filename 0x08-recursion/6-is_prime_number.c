#include "main.h"

/**
 *is_prime_number - Check if number is prime
 *@n: Number to test
 *
 *Return: 1 if prime, otherwise 0
 */
int is_prime_number(int n)
{
	if (n < 2)
		return 0;
	return (!pCheck(n,n/2));
}

/**
 *pCheck - Find a factor or return 0
 *@n: number to check
 *@i: Current number to test
 *
 *Return: Factor of N or 0
 */
int pCheck(int n, int i)
{
	if (n % i && i)
		return (pCheck(n, --i));
	return (i);
}
