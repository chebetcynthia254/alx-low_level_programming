#include "main.h"
/**
 * print_alphabet_x10 - Prints the lowercase alphabet 10 times.
 */
void print_alphabet_x10(void)
{
int i;
char ch;
i = 0;
while (i < 10)
{
for (ch = 0; ch < 10; ch++)
{
_putchar(ch);
}
_putchar('\n');
i++
}
}
