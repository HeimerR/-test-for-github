#ifndef _SHELL_H
#define _SHELL_H
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <string.h>
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);
char **create_argv(char *str, int len);
char **strtow(char *str);
#endif
