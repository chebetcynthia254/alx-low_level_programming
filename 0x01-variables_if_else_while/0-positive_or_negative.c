#include <time.h>
#include <stdio.h>
#include <stdlib.h>
/**
* main - Entry point of the program
*
* Return: 0 on successful execution
*/
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
if (n > 0)
{
printf("is positive\n");
}
else if (n == 0)
{
printf("is zero\n");
}
else
{
printf("is negative\n");
}
return (0);
}
