#include "main.h"
#include <stdio.h>
/**
* print_times_table - Prints the n times table, starting from 0.
* @n: The number for which to print the times table.
*/
void print_times_table(int n)
{
int i, j, result;
for (i = 0; i <= n; i++)
{
for (j = 0; j <= n; j++)
{
result = i * j;
if (j == 0)
{
printf("%2d", result);
}
else
{
printf(", %2d", result);
}
}
printf("\n");
}
}
