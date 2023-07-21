#include "main.h"
#include <stdio.h>
/**
 * print_diagonal - draws a diagonal line according to the parameter
 * @n: the number of times to print the diagonal line
 */
void print_diagonal(int n)
{
int i;
int j;
if (n <= 0)
{
_putchar('\n');
}
else
{
for (i = 0; i < n; i++)
{
for (j = 0; j < i; j++)
{
if (j != i - 1)
_putchar(' ');
else
_putchar('\\');
}
_putchar('\n');
}
}
}
