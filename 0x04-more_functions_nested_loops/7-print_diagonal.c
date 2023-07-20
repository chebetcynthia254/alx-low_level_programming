#include "main.h"
/**
 * print_diagonal - draws a diagoal lie accordig to parameter
 *@n: then  number of tims to print diagonal line
 * Return: Always 0.
 */
void print_diagonal(int n)
{
int x;
int y;
if (n <= 0)
{
_putchar('\n');
}
else
{
for (int x = 0; x < n; x++)
{
for (int y = 0; y < x; y++)
{
_putchar(32);
}
_putchar(92);
_putchar('\n');
}
}
}

