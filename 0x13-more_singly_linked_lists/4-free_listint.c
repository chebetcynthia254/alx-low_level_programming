#include "lists.h"

/**
 * free_listint - frees a list in listint_t
 * @head: list to be freed in listint
 */
void free_listint(listint_t *head)
{
listint_t *temp;
while (head)
{
temp = head->next;
free(head);
head = temp;
}
}
