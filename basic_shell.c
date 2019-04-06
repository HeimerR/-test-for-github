#define _GNU_SOURCE
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <string.h>
/**
  * main - shell starting
  *
  * Return: Always (0);
**/
int main(void)
{
	char *line = NULL;
	size_t len = 1;
	pid_t child;
	char *argv[3];
	int confg;

	if (isatty(0))
		printf("Ghost-in-the-shell-1 ");
	while ((confg = getline(&line, &len, stdin)) != -1)
	{
		argv[0] = strtok(line, " \n");
		argv[1] = strtok(NULL, "\n");
		argv[2] = NULL;
		if(argv[0])
		{
			child = fork();
			if (!child)
			{
				if (execve(argv[0], argv, NULL) == -1)
				{
					perror("./shell");
				}
				free(line);
				exit(98);
			}
			else
			{
				wait(NULL);
			}
		}
		if (isatty(0))
			printf("Ghost-in-the-shell-2 ");
		len = 1;
	}
	free(line);
	if (isatty(0))
	printf("\n");
	return (0);
}
