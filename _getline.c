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

/**
 * _strcmp - compares two strings
 * @sea: string one
 * @bass: string two
 * Return: 1 if they are the same. 0 if they are not.
 */
int _strcmp(char *sea, char *bass)
{
	int i = 0;

	if (!sea || !bass)
		return (0);
	else
		while (sea[i] && bass[i])
		{
			if (sea[i] != bass[i])
				return (0);
			i++;
		}
	if (sea[i] == '\0' && bass[i] == '\0')
		return (1);

	return (0);
}
