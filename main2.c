#include <stdio.h>
int main(int argc, char **argv)
{
int i;
while (argv[i])
{
	printf("%s\n", argv[i]);
	i++;
}

}