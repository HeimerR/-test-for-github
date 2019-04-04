       //#define _GNU_SOURCE
       #include <stdio.h>
       #include <stdlib.h>

       int
       main(void)
       {
          // FILE *fp;
           char *line = NULL;
           size_t len = 0;
           ssize_t read;

          // fp = fopen("/etc/motd", "r");
          // if (fp == NULL)
           //    exit(EXIT_FAILURE);

	       printf("$ ");
         //  while ((read = getline(&line, &len, stdin)) != -1) {
           	read = getline(&line, &len, stdin);
		if (read == -1)
		exit(98);
             //  printf("charaters read %zu :\n", read);
               printf("%s", line);
	     //  printf("$ ");

           free(line);
           exit(EXIT_SUCCESS);
       }

