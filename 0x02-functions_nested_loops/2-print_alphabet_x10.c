#include <stdio.h>
/**
* main - check the code.
* Return: Always 0.
*/
void print_alphabet_x10(void)
{
int count;
for (count = 0; count < 10; count++)
{
char letter = 'a';
while (letter <= 'z')
{
putchar(letter);
letter++;
}
}
putchar('\n');
}
