#include "shell.h"

int main(void)
{
	ssize_t input = 1024;
	char buffer[1024];
	
	while (input == 1024)
	{
	fflush( stdin );
	input = read(STDIN_FILENO, buffer, sizeof(buffer));
	fflush( stdout );
	printf("%s", buffer);
	exit(9);
	}

}
