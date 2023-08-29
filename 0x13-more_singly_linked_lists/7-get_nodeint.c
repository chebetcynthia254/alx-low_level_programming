#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of linked list
 * @head: first node of listint
 * @index: node to be returned
 *
 * Return: pointer to the node starting at 0,
 * or NULL if it does not exis#include
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
unsigned int i = 0;
listint_t *temp = head;
while (temp && i < index)
{
temp = temp->next;
i++;
}
return (temp ? temp : NULL);
}
