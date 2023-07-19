#include "main.h"
/**
*_isalpha - shows 1 if the input is a
*letter Another character shows 0
*c: the character in ANCII code
*Return: 1 for letters o for the rest
*/
int _isalpha(int c)
{
if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
{
return (1);
}
else
{
return (0);
}
_putchar('\n');
}
