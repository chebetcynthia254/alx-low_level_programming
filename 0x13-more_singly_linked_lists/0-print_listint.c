#include "lists.h"

/**
 * print_listint - prints  the elements of linked lists
 * @h: type of listint to  be print
 *
 * Return:  nodes to be printed
 */
size_t print_listint(const listint_t *h)
{
size_t num = 0;

while (h)
{
printf("%d\n", h->n);
num++;
h = h->next;
}
return (num);
}
