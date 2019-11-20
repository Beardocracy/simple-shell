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
