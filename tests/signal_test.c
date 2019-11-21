#include <signal.h>
#include <stdio.h>

typedef void (*sighandler_t)(int);

int main(void)
{
	int i;
	sighandler_t ignore;

	printf("sig_ign => %p\n", SIG_IGN);
	printf("sig_dfl => %p\n", SIG_DFL);
	printf("sigint => %d\n", SIGINT);

	
	printf("signal(SIGINT, SIG_IGN) ==> %p\n", signal(SIGINT, SIG_IGN));
	printf("signal(SIGINT, SIG_IGN) ==> %p\n", signal(SIGINT, ignore));

//	i = signal(SIGINT, SIG_IGN);

//	printf("i => %d\n", i);

	return (0);
}
