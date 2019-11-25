#include "holberton.h"
#include <stdlib.h>

/**
 * ptr_array_print - prints an array of strings
 * @arr: an array of strings containing the variables
 * Return: the number of strings printed
 */
int ptr_array_print(char **arr)
{
	int i;

	for (i = 0; arr[i]; i++)
	{
		print_string(arr[i]);
		_putchar('\n');
	}

	return (i - 1);
}

/**
 * exit_status - exits the program with specific exit status and frees mallocs.
 * @path: string containing the exit command
 * @commands: array of strings containing the rest of the command line
 * @caller: name of the executable program, aka the shell.
 * Return: 2 if illegal number
 */
int exit_status(char *path, char **commands, char *caller)
{
	int status = 0;

	if (commands[1] != NULL)
	{
		status = _atoi(commands[1]);
		if (status < 0)
		{
			print_string(caller);
			print_string(": 1: exit: Illegal number: ");
			print_string(commands[1]);
			_putchar('\n');
			return (2);
		}
	}
	free(path);
	free(commands[0]);
	exit(status);
}
