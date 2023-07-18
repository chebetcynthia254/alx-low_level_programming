#include "main.h"
#include <stdio.h>
/**
 * print_alphabet_x10 - Prints the lowercase alphabet 10 times.
 */
void print_alphabet_x10(void)
{
int count;
for (count = 0; count < 10; count++)
{
char letter = 'a';
while (letter <= 'z')
{
_putchar(letter);
letter++;
}
}
_putchar('\n');
}
