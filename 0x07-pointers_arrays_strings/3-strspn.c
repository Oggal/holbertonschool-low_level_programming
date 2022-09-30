#include "main.h"

/**
 *_strspn - Find Length of substring
 *@s:Input String
 *@a:Accepted Chars
 *
 *Return: Count Length that S contains A
 */
unsigned int _strspn(char *s, char *a)
{
	int i, j;

	for (i = 0; s[i]; i++)
	{
		for (j = 0; a[j]; j++)
		{
			if (s[i] == a[j])
				break;
		}
		if(s[i] != a[j])
			break;
	}

	return ((unsigned int)i);
}
