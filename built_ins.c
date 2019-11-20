#include "holberton.h"

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
