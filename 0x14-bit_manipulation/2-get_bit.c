#include "main.h"
/**
*get_bit - This returns bit value as an index
*in decimal number
*@n: this ia a number to search
*@index: this is the index of a bit
*Return: The bit value
*/
int get_bit(unsigned long int n, unsigned int index)
{
int bit_val;
if (index > 63)
return (-1);
bit_val = (n >> index) & 1;
return (bit_val);
}
