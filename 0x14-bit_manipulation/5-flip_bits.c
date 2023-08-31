#include "main.h"

/**
*flip_bits- number of bits to be changed
*@n: this is the first number
*@m: this is the second number
*Return: The number of bits to be changed
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
int i, count = 0;
unsigned long int current;
unsigned long int exlusive = n ^ m;
for (i = 63; i >= 0; i--)
{
current = exlusive >> i;
if (current & 1)
count++;
}
return (count);
}
