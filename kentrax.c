#include "holberton.h"
#include <string.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <stdio.h>
#include <signal.h>

typedef void (*sighandler_t)(int);

/**
 * main - a simple shell
 * @ac: the number of arguments
 * @av: an array of strings taken in as arguments from the command line.
 * @env: an array of strings, the environmental variables.
 * Return: need to ammend.
 */
int main(int ac, char *av[], char *env[])
{
	char *buffer, *com[32], *com_path;
	char delim = ' ';
	ssize_t num_read;
	size_t n = 0;
	int i, flag, path_value, z;
	sighandler_t ignore;

	if (signal(SIGINT, SIG_IGN) != SIG_IGN)
		signal(SIGINT, ignore);
	while (num_read != -1)
	{
		if (isatty(STDIN_FILENO))
			print_prompt();
		num_read = getline(&buffer, &n, stdin);
		if (num_read == -1)
			break;
		del_newline(buffer);
		if (buffer[0])
		{
			com[0] = _strtok(buffer, &delim);
			for (i = 1, flag = 1; flag; i++)
			{
				com[i] = _strtok(NULL, &delim);
				if (com[i] == NULL)
					flag = 0;
			}
			com_path = get_path(com[0], env, &path_value);
			switcher(path_value, com_path, com, env, av);
			free(com_path);
		}
	}
	if (buffer)
		free(buffer);
	return (0);
}
