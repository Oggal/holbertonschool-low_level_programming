#include "main.h"

/**
 *str_concat - Concat some strings
 *@s1: First String
 *@s2: Added String
 *
 *Return: S1S2\0
 */
char *str_concat(char *s1, char *s2)
{
	char *o; /*Output*/
	int l1, l2, i;

	/*Handle NULL*/
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	l1 = l2 = 0;
	/*Count lengths*/
	while (s1[l1])
		l1++;
	while (s2[l2])
		l2++;
	/*Request Memory*/
	o = malloc(sizeof(char) * (l1 + l2 + 1));
	/*Handle Potential NULL*/
	if (o == NULL)
		return (NULL);
	/*Fill Output with content*/
	for (i = 0; i < l1; i++)
		o[i] = s1[i];
	for (i = 0; i < l2; i++)
		o[i + l1] = s2[i];
	o[l1 + l2 + 1] = '\0';

	return (o);
}
