#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * is_positive_number - checks if a string is a positive number
 * @s: string to check
 * Return: 1 if positive number, 0 if not
 */
int is_positive_number(char *s)
{
while (*s != '\0')
{
if (!isdigit(*s))
return (0);
s++;
}
return (1);
}
int main(int argc, char *argv[])
{
int i;
int sum = 0;
if (argc < 2)
{
printf("0\n");
return (0);
}
for (i = 1; i < argc; i++)
{
if (!is_positive_number(argv[i]))
{
printf("Error\n");
return (1);
}
sum += atoi(argv[i]);
}
printf("%d\n", sum);
return (0);
}
