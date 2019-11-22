#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>


/**
 * _strtok - extracts tokens from strings.
 * @s: the string to be tokenized
 * @delim: the char used to determine tokens
 * Return: pointer to the first char in the token.
 */
char *_strtok(char *s, const char *delim)
{
	char *token;
	static int tok_s;
	static char *buftok;

	if (s != NULL)
	{
		buftok = s;
		tok_s = 0;
	}

	while (buftok[tok_s] == *delim && buftok[tok_s] != '\0')
		tok_s++;
	if (buftok[tok_s] != '\0')
		token = &buftok[tok_s];
	else
		return (NULL);
	while (buftok[tok_s] != '\0')
	{
		if (buftok[tok_s] == *delim)
		{
			buftok[tok_s] = '\0';
			tok_s++;
			return (token);
		}
		tok_s++;
	}
	return (token);
}
