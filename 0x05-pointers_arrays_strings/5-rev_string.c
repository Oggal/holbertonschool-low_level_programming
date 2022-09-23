#include "main.h"

/**
 *rev_string - String revereser
 *@s: String to reverse
 *
 */
void rev_string(char *s)
{
	int j, i = 0;
	char old[200];

	while ((s[i]) != '\0')
		old[i] = s[i++];

	for (j = 0; j < i; j++)
	{
		s[j] = old[i - j];
	}
}
