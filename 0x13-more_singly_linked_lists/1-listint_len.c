#include "lists.h"

/**
 *listint_len - returns the number of elements in a linked list listint_t
 *@h: traverse the listint
 *
 * Return: number of nodes in listint
 */
size_t listint_len(const listint_t *h)
{
size_t num = 0;
while (h)
{
num++;
h = h->next;
}
return (num);
}
