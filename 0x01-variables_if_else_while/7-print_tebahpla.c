#include <stdio.h>
/**
* main - Entry point of the program
*
* Return: 0 on successful execution
*/
int main(void)
{
int i;
for (i = 25; i >= 0; i--)
{
putchar('a' + i);
}
putchar('\n');
return (0);
}
