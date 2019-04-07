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
int main(int ac, char **av)
{
    unsigned int i = 0, j = 0;
    struct stat st;
    extern char **environ;
    char **paths;
    char *clone_path;

    while(environ[j]) 
    {
	
	if (cmpstr(environ[j], "PATH=") == 1)
		break;
	j++;
    }
        printf("PATH found:%s\n", environ[j]); 
        paths = _strtok(environ[j], ":");
	rmstr(paths[0], "PATH=");
	while (paths[i])
	{	
	printf("PATH start:%s\n", paths[i++]);
	}
    if (ac < 2)
    {
        printf("Usage: %s path_to_file ...\n", av[0]);
        return (1);
    }
	i = 1;
	j = 0;
    while (av[i])
    {
        while (paths[j])
	{
		clone_path = str_concat(paths[j], "/");
		clone_path = str_concat(clone_path, av[i]);
		printf("%s:", clone_path);
       		if (stat(clone_path, &st) == 0)
        	{
            		printf(" FOUND\n");
			return (0);
       		}
		j++;
	}
        printf(" NOT FOUND\n");
        i++;
    }
    return (0);
}

