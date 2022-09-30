#include "main.h"
#include <stddef.h>

/**
 *_strstr - Find a string
 *@s: String to search
 *@a: string to find
 *
 *Return: Pointer to byte found
 */
char *_strstr(char *s, char *a)
{
	int i, j;

	for (i = 0; s[i]; i++)
	{
		for (j = 0; a[j]; j++)
		{
			if (s[i+j] != a[j])
				break;
		}
		if (!a[j]) /*Check if loop ended naturally*/
			return (s + i);
	}

	return (NULL);
}
