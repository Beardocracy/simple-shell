#include "holberton.h"

/**
 * _putchar - prints a character to std out.
 * @c: the character to be printed.
 * Return: 1 if successful, 0 if not.
 */
int _putchar(char c)
{
	return (write(STDOUT_FILENO, &c, 1));
}


/**
 * print_prompt - prints the command line prompt.
 */
void print_prompt(void)
{
	char prompt[12] = "KENTRAX $ ";
	int i;

	for (i = 0; prompt[i]; i++)
		write(STDOUT_FILENO, &prompt[i], 1);
}

/**
 * print_string - prints a string ended with \0.
 * @s: the string to be printed.
 * Return: the number of characters printed.
 */
int print_string(char *s)
{
	int i, j;

	if (s == NULL)
		return (0);

	for (i = 0; s[i]; i++)
		j += write(STDOUT_FILENO, &s[i], 1);

	return (j);
}
