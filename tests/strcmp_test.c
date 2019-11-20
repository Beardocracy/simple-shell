#include "holberton.h"
#include <stdio.h>

int main(int ac, char **av)
{
	int ret;

	if (ac != 3)
	{
		printf("Use the function correctly: ./a.out string1 string2\n");
		return (0);
	}

	ret = _strcmp(av[1], av[2]);

	printf("The strings [%s] and [%s] are %s.\n", 
			av[1], av[2], ret == 0 ? "different" : "equal");
	return (0);
}

