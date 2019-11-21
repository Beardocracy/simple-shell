#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/types.h>

/**
 * Test bed for learning about isatty function
 */
int main(int ac, char **av)
{
	pid_t pid, ppid;
	int ret_isat;

	ret_isat = isatty(STDIN_FILENO);

	printf("You entered => %s\n", av[1]);
	printf("Isatty returned => %d\n", ret_isat);

	return (0);
}
