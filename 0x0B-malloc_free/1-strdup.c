#include "main.h"

/**
 *_strdup - Duplicate a string to a fresh Array
 *@str: string to dupe
 *
 *Return: A pointer to a duplicated String
 */
char *_strdup(char *str)
{
	char *o; /*Output*/
	int len, i;

	if (str == NULL)
		return (NULL);
	/*We know str is a string, find the length*/
	len = 0;
	while (str[len++])
		;
	/*Bam! Length got! with an extra for the null byte*/
	o = malloc(sizeof(char) * len);
	if (o == NULL)
		return (NULL);
	/*Just checked if we found memmory, going to <= to include
	  the null byte. This Comment may not pass betty*/
	for (i = 0; i <= len; i++)
	{
		o[i] = str[i];
	}

	return (o);
}
