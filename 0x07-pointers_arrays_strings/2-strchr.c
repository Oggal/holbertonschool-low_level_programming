#include "main.h"

/**
 *_strchr - Get pointer to First @c
 *@s: String to search
 *@c: Char to find
 *
 *Return: Pointer to @c or NULL
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i] && s[i] != c)
		i++;
	if (!s[i] && c != '\0')
		return (0);

	return (s + i);
}
