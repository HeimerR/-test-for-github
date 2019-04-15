#include "shell.h"
/*
*
*
*
*
*
*/
char ***create_argvsup(char **argv)
{
	int i = 0, depth = 0;
	char ***argv_sup;
	char **aux;

	aux = argv;
	if (!argv)
		return(NULL);
	while (argv[i]) 
	{
		if(argv[i][0] == ';' && argv[i][1] == '\0')
			depth++;

	}
	argv_sup = malloc(sizeof(char *) * (depth + 1));
	if (depth == 0)
		return (NULL);
	i = 0;
	argv_sup[i++] = argv;
	while (argv[i]) 
	{
		
		if(argv[i][0] == ';' && argv[i][1] == '\0')
		{
			argv[i][0] = '\0';
			argv_sup[i] = aux + 1;
		}
	aux++;
	i++;
	}
	return (argv_sup);
}
