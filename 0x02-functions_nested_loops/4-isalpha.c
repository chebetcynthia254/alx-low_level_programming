#include "main.h"
/**
 * _isalpha -shows 1 if the input is a
 * letter another cases shows 0
 *the character in ANCII
 * Return:1 for letters 0 for the rest
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
