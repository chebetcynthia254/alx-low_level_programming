#include "main.h"
#include <stdio.h>
/**
 * print_line - draws a straight line in the terminal
 *@c: the number of times to draw
 * Return: empty
 */
void print_line(int n)
{
int i;
for (int i = 0; i < n; i++)
{
_putchar('_');
}
_putchar('\n');
}
