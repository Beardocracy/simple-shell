#include "holberton.h"
#include <stdlib.h>

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

/**
 * _strdup - copies and allocates space for a string
 * @s: the string to be copied.
 * Return: pointer to malloc'd space containing the copy of the string.
 */
char *_strdup(char *s)
{
	int i = 0;
	char *dup;

	while (s[i] != '\0')
		i++;
	dup = malloc(sizeof(char) * i);
	if (dup == NULL)
		return (NULL);
	for (i = 0; s[i]; i++)
		dup[i] = s[i];
	dup[i] = '\0';

	return (dup);
}
