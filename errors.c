#include "holberton.h"

/**
 * perror_permission - prints the permission denied error message.
 * @file: the name of the file
 * @caller: the name of the executable file that tried to make the call.
 * Return: 0
 */
int perror_permission(char *file, char *caller)
{
	_putchar('-');
	print_string(caller);
	print_string(": ");
	print_string(file);
	print_string(": Permission denied\n");

	return (0);
}

/**
 * perror_file - prints the no such file or directory error message
 * @file: the name of the file
 * @caller: the name of the executable file that made the call
 * Return: 0
 */
int perror_file(char *file, char *caller)
{
	
	_putchar('-');
	print_string(caller);
	print_string(": ");
	print_string(file);
	print_string(": No such file or directory\n");
	return (0);
}

/**
 * perror_command - prints the command not found error message
 * @command: the command
 * Return: 0
 */
int perror_command(char *command)
{
	print_string(command);
	print_string(": command not found\n");
}
