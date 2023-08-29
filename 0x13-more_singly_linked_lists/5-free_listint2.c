#include "lists.h"

/**
 * free_listint2 - frees a list in listint_t
 * @head: pointer to the  list to be freed in listint
 */
void free_listint2(listint_t **head)
{
listint_t *temp;
if (head == NULL)
return;
while (*head)
{
temp = (*head)->next;
free(*head);
*head = temp;
}
*head = NULL;
}
