       //#define _GNU_SOURCE
       #include <stdio.h>
       #include <stdlib.h>
       #include <string.h>

       int
       main(void)
       {
          // FILE *fp;
           char *line = NULL;
           size_t len = 0;
           ssize_t read;
	   char *word;

          // fp = fopen("/etc/motd", "r");
          // if (fp == NULL)
           //    exit(EXIT_FAILURE);

	       printf("$ ");
         //  while ((read = getline(&line, &len, stdin)) != -1) {
           	read = getline(&line, &len, stdin);
		if (read == -1)
		exit(98);
             //  printf("charaters read %zu :\n", read);
             //  printf("%s", line);
	     //  printf("$ ");
	
		word = strtok(line, " ");
		while (word)
		{
		      printf("%s\n", word);
		      word = strtok(NULL, " ");
		}

           free(line);
           exit(EXIT_SUCCESS);
       }

