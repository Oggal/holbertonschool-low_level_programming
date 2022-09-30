#include "main.h"

/**
 *_strpbrk - Find a byte
 *@s: String to search
 *@a: Bytes to find
 *
 *Return: Pointer to byte found
 */
char *_strpbrk(char *s, char *a)
{
	int i, j;

	for (i = 0; s[i]; i++)
	{
		for (j = 0; a[j]; j++)
		{
			if (a[j] == s[i])
				break;
		}
		if (s[i] == a[j])
			break;
	}
	if (s[i] != a[j])
		return (0);
	return (s + i);
}
