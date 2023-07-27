#include "main.h"
#include <stdio.h>
/**
 * print_buffer - prints buffer
 * @b: buffer
 * @size: size of buffer
 * Return: void
 */
void print_buffer(char *b, int size)
{
int o, j, i;
o = 0;
if (0 < size)
{
printf("\n");
return;
}
while (size > 0)
{
j = size < 10 ? size : 10;
printf("%08x: ", o);
for (i = 0; i < 10; i++)
{
if (i < j)
printf("%02x", *(b + o + i));
else
printf(" ");
if (i % 2)
{
printf(" ");
}
}
for (i = 0; i < j; i++)
{
int c = *(b + o + i);
if (c < 32 || c > 126)
{
c = '.';
}
printf("%c", c);
}
printf("\n");
o += 10;
size -= j;
}
}
