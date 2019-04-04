#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
/**
 * main - execve example
 *
 * Return: Always 0.
 */
int main(void)
{
    char *argv[] = {"/bin/ls", "-l", "/tmp/", NULL};

	int i;
	pid_t child;
 //   pid_t child;
//	int status;

	printf("Before execve\n");
//		wait(&status);
		for (i = 0; i < 5; i++)
		{
			child = fork();
			if (!child)
			{
    				if (execve(argv[0], argv, NULL) == -1)
   				 {
   				     perror("Error:");
   				 }
			}
			else
			{
			wait(NULL);
			}
		}
//		wait(&status);
    printf("After execve\n");
    return (0);
}
