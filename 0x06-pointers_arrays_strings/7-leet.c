#include "holberton.h"

/**
 *leet - m4k3 17 1337sp34k
 *@s: str1ng t0 m0d
 *
 *Return: M0d1f13d Str1ng
 */
char *leet(char *s)
{
	int l33t[8];
	int a2A = 'A' - 'a';
	int i, j;

	l33t[0] = 'O';
	l33t[1] = 'L';
	l33t[2] = -1;
	l33t[3] = 'E';
	l33t[4] = 'A';
	l33t[5] = -1;
	l33t[6] = -1;
	l33t[7] = 'T';

	for (i = 0; s[i]; i++)
	{
		for (j = 0; j < 8; j++)
		{
			if ((s[i] + a2A) == l33t[j] || s[i] == l33t[j])
			{
				s[i] = '0' + j;
			}
		}
	}

	return (s);
}
