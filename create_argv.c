#include "shell.h"
/**
* create_argv - reallocates a memory block
* @ptr: initial pointer
* @old_size: initial size
* @new_size: new size
* Return: pointer to array
*/
char **create_argv(char *str, int len)
{
	char **argv;
	(void) len;
	unsigned int i = 0;
	argv = strtow(str);
	
	while (argv[i])
	{
	printf("hola argument %d %s\n", i, argv[i]); 
	i++;
	}
/*	

	argv = malloc(sizeof(char *) * 2);
	argv[0] = strtok(str, " \n");
	printf("hola argument 0: %s\n", argv[0]);
	while (argv[i])
	{	
		argv[++i] = strtok(NULL, " \n");
		printf("hola argument %d: %s\n", i, argv[i]);
		if (argv[i])
		{
		argv = realloc(argv, i + 2);
		}
	
	} */
 
return(argv);
}
