#include "main.h"
/**
* main - check the code
*
* Return: Always 0.
*/
void print_alphabet(void)
{
char letter = 'a';
for (letter <= 'z')
{
putchar(letter);
letter++;
}
putchar('\n');
}
