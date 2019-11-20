#include "holberton.h"
#include <stdio.h>

int main(int ac, char **av)
{
	if (ac != 2)
		printf("Use the program like => $ ./a.out string\n");

	printf("You entered: %s\nATOI Returned => %d\n", av[1], _atoi(av[1]));

	return (0);
}
