#include "holberton.h"
#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>
#include <stdlib.h>

/**
 * switcher - directs traffic
 * @val: integer that tells me where to send other arguments
 * @com_path: string that contains either a absolute path or other command.
 * @flags: the rest of what was accepted from getline
 * @env: a copy of the environment variables
 * @av: a copy of the argument taken in from the command line at launch
 * Return: 0 if successful
 */
int switcher(int val, char *com_path, char **flags, char **env, char **av)
{
	switch (val)
	{
	case 0:
		perror_command(com_path);
		return (0);
	case 1:
		perror_permission(com_path, av[0]);
		return (0);
	case 2:
		perror_command(com_path);
		return (0);
	case 3:
		executer(com_path, flags);
		return (0);
	case 4:
		ptr_array_print(env);
		return (0);
	case 5:
		exit_status(com_path, flags, av[0]);
		return (0);
	}
	return (1);
}
/**
 * executer - forks current process to run execve
 * @command: the absolute path of an executable
 * @flags: an array of strings, including extra input for the command
 * Return: 0 if successful, -1 if not
 */
int executer(char *command, char **flags)
{
	pid_t kid_pid;
	int status;

	kid_pid = fork();
	if (kid_pid == -1)
		return (-1);
	if (kid_pid == 0)
	{
		execve(command, flags, NULL);
		exit(187);
	}
	else
		wait(&status);

	return (0);
}
