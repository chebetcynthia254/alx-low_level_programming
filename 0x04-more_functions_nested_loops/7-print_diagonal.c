#include "main.h"
#include <stdio.h>
/**
 * print_diagonal - draws a diagonal line according to the parameter
 * @n: the number of times to print the diagonal line
 */
void print_diagonal(int n)
{
if (n <= 0)
{
_putchar('\n');
}
else
{
for (int i = 0; i < n; i++)
{
for (int j = 0; j < i; j++)
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
