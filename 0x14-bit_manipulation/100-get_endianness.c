#include "main.h"

/**
*get_endianness - this checks machine if its big or little
*Return: 0 for big and 1 for little
*/
int get_endianness(void)
{
unsigned int i = 1;
char *c = (char *) &i;
return (*c);
}
