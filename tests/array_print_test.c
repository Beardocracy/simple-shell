#include "holberton.h"
#include <stdio.h>

int main(int ac, char **av, char **env)
{
	int ret;

	ret = ptr_array_print(env);
	printf("Arrays printed => %d\n", ret);

	return (0);
}

