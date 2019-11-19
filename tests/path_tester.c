#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

int main(int ac, char **av, char **env)
{
	int i, path_ret = 0;
	char *com_path;

	printf("path_ret => %d\n", path_ret);

	com_path = get_path(av[1], env, &path_ret);

	printf("Com_path => %s\n", com_path);
	printf("path_ret => %d\n", path_ret);
	if (path_ret == 1)
		printf("Command Found => %s\n", com_path);
	if (path_ret == -1)
		printf("%s: command not found\n", av[1]);
	if (path_ret == 0)
		printf("%s: Permission denied\n", av[1]);



	return (0);
}
