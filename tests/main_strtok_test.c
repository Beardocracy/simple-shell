#include "holberton.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * main - this is a testbed for _strtok
 *
 */
int main(int ac, char **av)
{
	char *tok;
	char *_tok;
	char delim = ' ';
	char *cp_av1, *cp_av2;
	int i;

	if (ac != 2)
	{
		printf("Usage: ./a.out [string]\n");
		return (0);
	}

	cp_av1 = malloc(sizeof(char) * strlen(av[1]));
	cp_av2 = malloc(sizeof(char) * strlen(av[1]));
	for (i = 0; av[1][i]; i++)
	{
		cp_av1[i] = av[1][i];
		cp_av2[i] = av[1][i];
	}
	printf("You entered => %s\n", av[1]);
	tok = strtok(cp_av1, &delim);
	while (tok != NULL)
	{
		printf("strok   => %s\n", tok);
		tok = strtok(NULL, &delim);
	}
	_tok = _strtok(cp_av2, &delim);
	while (_tok != NULL)
	{
		printf("_strok  => %s\n", _tok);
		_tok = _strtok(NULL, &delim);
	}


	return (0);
}
