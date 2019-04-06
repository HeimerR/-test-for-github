#include "shell.h"
/**
  * main - shell starting
  *
  * Return: Always (0);
**/
int main(void)
{
	char *line = NULL;
	size_t len = 0;
	pid_t child;
	char **argv;
	int confg;

	if (isatty(0))
//		write(stdout,"Ghost-in-the-shell-1 ", 21);
		printf("Ghost-in-the-shell-1 ");
	while ((confg = getline(&line, &len, stdin)) != -1)
	{
		argv = create_argv(line, len);
		if(argv[0])
		{
			child = fork();
			if (!child)
			{
				if (execve(argv[0], argv, NULL) == -1)
				{
					perror("./shell");
				}
				exit(98);
			}
			else
			{
				wait(NULL);
			}
		}
		if (isatty(0))
		{
		//	write(stdout, "Ghost-in-the-shell-2 ", 21);
			printf("Ghost-in-the-shell-2 ");
		}
	}
	free(line);
	if (isatty(0))
//	write(stdout, "\n", 1);
	printf("\n");
	return (0);
}
