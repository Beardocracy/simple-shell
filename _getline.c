#include "holberton.h"

/**
 * del_newline - overwrites a newline char before the null char in a
 * string.
 * @s: the string to be modified.
 */
void del_newline(char *s)
{
	int i;

	for (i = 0; s[i]; i++)
	{
		if (s[i] == '\n' && s[i + 1] == '\0')
			s[i] = '\0';
	}
}
