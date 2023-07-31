#include "main.h"
#include "stdio.h"
/**
 *print_diagsums - entry point
 *@a: input
 *@size: input
 *Return: Always 0 (success)
 */
void print_diagsums(int *a, int size)
{
int i, n;
int sum1 = 0;
int sum2 = 0;
for (i = 0; i <= (size * size); i = i + size + 1)
sum1 = sum1 + a[i];
for (n = size - 1; n <= (size * size) - size; n = n + size - 1)
sum2 = sum2 + a[n];
printf("Sum of main diagonal: %d\n", sum1);
printf("Sum of secondary diagonal: %d\n", sum2);
}
