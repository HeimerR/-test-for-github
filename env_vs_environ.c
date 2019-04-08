#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include "shell.h"
/**
 * main - stat example
 *
 * Return: Always 0.
 */
int main(int ac, char **av, char **env)
{
    unsigned int i = 0, j = 0;
    extern char **environ;
	(void) ac;
	(void) av;
	
	while (env[i])
		printf("%s\n", env[i++]);
	printf("\n-----------------------------------------------------------------------------------------------------------------------------------------------------\n");
	while (environ[j])
		printf("%s\n", environ[j++]);
    return (0);
}

