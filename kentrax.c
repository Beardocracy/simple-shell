#include "holberton.h"
#include <string.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <stdio.h>

/**
 * main - a simple shell
 * @ac: the number of arguments
 * @av: an array of strings taken in as arguments from the command line.
 * @env: an array of strings, the environmental variables.
 * Return: need to ammend.
 */
int main(int ac, char *av[], char *env[])
{
	char *buffer, *com[32];
	char delim = ' ';
	ssize_t num_read;
	size_t n = 0;
	int i, flag, status;
	pid_t kid_pid;

	while (num_read != -1)
	{
		printf("KENTRAX $ ");
		num_read = getline(&buffer, &n, stdin);
		if (num_read == -1)
			exit(99);
		del_newline(buffer);
		com[0] = strtok(buffer, &delim);
		for (i = 1, flag = 1; flag; i++)
		{
			com[i] = strtok(NULL, &delim);
			if (com[i] == NULL)
				flag = 0;
		}
		kid_pid = fork();
		if (kid_pid == -1)
			return (55);
		if (kid_pid == 0)
		{
			execve(com[0], com, NULL);
			exit(187);
		}
		else
			wait(&status);
	}
	free(buffer);
	return (0);
}
