#include "main.h"

/**
 * binary_to_uint - Convert Binary string to uint
 *@b: str to convert
 *
 *Return: Unisgned int of binary value
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int o = 0;
	unsigned int i = 0;

	if (b == NULL)
		return (0);
	while (b[i])
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		if (b[i] == '0')
			o = o << 1;
		if (b[i] == '1')
			o = (o << 1) + 1;
		i++;
	}
	return (o);
}
