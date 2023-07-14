#include <stdio.h>
/**
* main - Entry point of the program
*
* Return: 0 on successful execution
*/
int main(void)
{
int i;
for (i = 0; i < 26; i++)
{
putchar('a' + i);
}
for (i = 0; i < 26; i++)
{
putchar('A' + i);
}
putchar('\n');
return (0);
}
