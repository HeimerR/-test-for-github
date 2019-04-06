#include <errno.h>
#include <stdio.h>

int main()
{
    for(int i=0; i<sys_nerr; i++)
        printf("sys_errlist[%d] = \"%s\"\n", i, sys_errlist[i]);
    return 0;
}
