#include "function_pointers.h"

/**
 * int_index - returns the index of an element that matches a condition
 * @array: array of integers
 * @size: number of elements in the array
 * @cmp: pointer to the comparison function
 * Return: index of the matching element, or -1 if not found
 */
int int_index(int *array, int size, int (*cmp)(int))
{
int i;
if (array == NULL || size <= 0 || cmp == NULL)
return (-1);
for (i = 0; i < size; i++)
{
if (cmp(array[i]))
return (i);
}
return (-1);
}
