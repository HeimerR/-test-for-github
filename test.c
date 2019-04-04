#include <stdio.h>
int print_sum(int a)
{
int sum;
if (a == 0)
{
return (0);
}
else
{
sum = print_sum(a-1);
sum = a + sum; 
return (sum);
}
}
int main(void)
{
int n = 5;
int sum;
printf("%d\n", n);
sum = print_sum(n);
printf("%d\n", sum);
return (0);
}
