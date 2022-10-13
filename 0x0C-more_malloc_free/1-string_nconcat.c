#include "main.h"

/**
 *string_nconcat - Concat 2 strings, max of n bytes from string 2
 *@s1: First String
 *@s2: Second String
 *@n:  Max Bytes of s2 to write
 *
 *Return: concated strings
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *o; /*OUTPUT*/
	unsigned int i, l1 = 0, l2 = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	/*Get s1 Length*/
	while (s1[l1])
		l1++;
	/*Get s2 Length*/
	while (s2[l2])
		l2++;
	/*Only use max N bytes*/
	l2 = ((n >= l2) ? l2 : n);
	/*to repeat, if N is larger, use l2, otherwise n*/
	o = malloc(sizeof(char) * (l1 + l2)+1);
	/*can use l2, since we know we maxed it at n*/
	if (o == NULL)
		return (NULL);
	for (i = 0; i < l1; i++)
	{
		o[i] = s1[i];
	}
	for (i = 0; i < l2; i++)
		o[i + l1] = s2[i];
	o[l1 + i] = '\0';

	return (o);
}
