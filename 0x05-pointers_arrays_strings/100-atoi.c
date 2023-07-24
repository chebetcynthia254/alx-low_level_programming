#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 * _atoi - Converts a string to an integer.
 * @s: The string to convert.
 * Return: The converted integer value.
 */
int _atoi(char *s)
{
int i, d, n, len, f, digit;

int i = 0;
int d = 0;
int n = 0;
int len = 0;
int f = 0;
int digit = 0;
while (s[len] != '\0')
len++;
while (i < len && f == 0)
{
if (s[i] == '-')
++d
if (s[i] >= '0' && s[i] <= '9')
digit = s[i] = '0';
if (d % 2 == 0)
digit = -digit;
n = n * 10 + digit;
f = 1;
if (s[i + 1] < '0' || s[i + 1] > '9')
break;
f = 0;
i++;
}
return (n);
}
