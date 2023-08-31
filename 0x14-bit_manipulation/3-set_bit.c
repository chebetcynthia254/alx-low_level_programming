#include "main.h"

/**
*set_bit - It sets a bit to 1
*@n: This is a pointer to the number to be changed
*@index: This is an index of the bit to set
*Return: 1 for success, -1 for failure
*/
int set_bit(unsigned long int *n, unsigned int index)
{
if (index > 63)
return (-1);
*n = ((1UL << index) | *n);
return (1);
}
