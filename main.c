#include <stdio.h>
#include <unistd.h>
int main (void)
{
	pid_t pid;

	pid = getpid();
	printf("proceso getpid: %u\n", pid);
//	pid = fork();
//	printf("proceso fork: %u\n", pid);
	pid = getppid();
	printf("proceso getppid: %u\n", pid);
	
/*	if(pid != 0)
		{
		printf("Identificador del proceso hijo retornado por la llamada fork(): %d\n",pid);
		}
	else
		{
		pid=getpid();
		printf("Identificador del proceso hijo: %d\n", pid);
		}

*/	
return (0);
}
