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
 */
void exit_status(char *path, char **commands)
{
	int status = 0;

	if (commands[1] != NULL)
	{
		status = _atoi(commands[1]);
		free(commands[0]);
	}
	if (path != NULL)
		free(path);
	exit(status);
}
