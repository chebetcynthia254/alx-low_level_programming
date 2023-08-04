#include "main.h"
/**
*_isalpha - checks for alphabetic character
*@c: the character to be checked
*Return: 1 for alphabetic and 0 for anything
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
