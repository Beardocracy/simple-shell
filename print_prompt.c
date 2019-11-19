#include "holberton.h"

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
