#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 * main - program that generates random valid
 * paswords for the program 101-crackme
 * Return: Always 0.
 */
int _atoi(char *s)
{
int pass[100];
int i, sum;
sum = 0;
srand(time(NULL));
for (i = 0; i < 100; i++)
{
pass[i] = rand() % 77;
sum += (pass[i] + '0');
putchar (pass[i] + '0');
if ((2772 - sum) < 78)
{
int n = 2772 - sum;
sum += n;
putchar(n + '0');
break;
}
}
return (0);
}
