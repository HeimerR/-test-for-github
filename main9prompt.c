       #define _GNU_SOURCE
       #include <stdio.h>
       #include <stdlib.h>

       int
       main(void)
       {
       	//	FILE *fp;    
		char *line = NULL;
           size_t len = 0;
           ssize_t read;

          // fp = fopen("/etc/motd", "r");
         //  if (fp == NULL)
           //    exit(EXIT_FAILURE);
//	printf("Ghost-in-the-shell-$ ");
          // while ((read = getline(&line, &len, stdin)) != -1) {
           read = getline(&line, &len, stdin);
               printf("Retrieved line of length %zu :\n", read);
               printf("%s", line);
               printf("stdin%s\n", stdin);
//	printf("Ghost-in-the-shell-$ ");
  //       }

           free(line);
           exit(0);
       }

