#include "main.h"

/**
*clear_bit - this sets the value of a given bit
*@n: This is a pointer to a number to be changed
*@index: This is an index to the bit to be cleared
*Return: 1 for success, -1 for failure
*/
int clear_bit(unsigned long int *n, unsigned int index)
{
if (index > 63)
return (-1);
*n = (~(1UL << index) & *n);
return (1);
}
