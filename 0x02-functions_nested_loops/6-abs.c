#include main.h

/**
 *_abs - Return an Absolute value
 *@n: Value to make absolute
 *
 *Return:positive value of n
 */
int _abs(int n)
{
	if (n >= 0)
		return (n);
	return (n * -1);
}
