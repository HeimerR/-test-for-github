#include "shell.h"

/**
 *signalc - no ctrl c
 *@a: not used
 **/
void signalc(int a)
{
	(void) a;
	write(STDOUT_FILENO, "\nGhost-in-the-shell-3 ", 22);
	fflush(stdout);
}

/**
  * main - shell starting
  * @ac: number of arguments
  * @argvex: arguments
  * Return: Always (0);
**/
int main(int ac, char *argvex[])
{
	char *line = NULL;
	bus_t bus0 = {0, 0, NULL};
	bus_t *bus;
	char **argv;
	char ***argv_sup;
	int confg, aux;
	unsigned int i = 1, j = 0;
	(void) ac;

	aux = cp_env();
	if (aux == -1)
		return (-1);
	bus = &bus0;
	if (isatty(STDIN_FILENO))
		write(STDOUT_FILENO, "Ghost-in-the-shell-1 ", 21);
	signal(SIGINT,  signalc);
	while ((confg = getstdin(&line)) != -1)
	{
		bus->count++;
		argv = create_argv(line, confg);
//		printf("hola mundo\n");
//		exit(9);
		argv_sup = create_argvsup(argv);
		while(argv_sup[j])
		{
			bus->arg0 = argvex[0];
			if (argv_sup[j] && argv_sup[j][0])
			{
				aux = check_bltin(argv_sup[j], line,  bus);
				if (aux != 0)
				bus->stat = check_argv(argv_sup[j], argvex, bus, line);
			}
			if (isatty(STDIN_FILENO))
				write(STDOUT_FILENO, "Ghost-in-the-shell-2 ", 21);
			free(argv_sup[j]);
			free(line);
			for (i = 1; argv_sup[j] && argv_sup[j][i]; i++)
				free(argv_sup[j][i]);
		j++;
		}
	}
	if (isatty(STDIN_FILENO))
		printf("\n");
	free(line);
/*
*	free_grid(argv);
*/
	return (0);
}
