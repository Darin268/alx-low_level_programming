#include "main.h"

/**
 * rev_string - Entry point
 * @s: string to be reversed
 */

void rev_string(char *s)
{
char j;
	int i, rev, rev1;

	rev1 = 0;

	for (rev = 0; s[rev] != '\0'; ++rev)
	{
	}

	rev1 = rev - 1;

	for (i = 0; i < rev / 2; i++)
	{
		j = s[i];
		s[i] = s[rev1];
		s[rev1--] = j;
	}
}
