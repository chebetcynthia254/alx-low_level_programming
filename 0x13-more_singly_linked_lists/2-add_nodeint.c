#include "lists.h"

/**
 * add_nodeint -  adds a new node at the beginning of a list in listint_t
 * @head: pointer to the first node
 * @n: This is a new node
 * Return: the address of the new element,or when it fails,NULL
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *new;
new = malloc(sizeof(listint_t));
if (!new)
return (NULL);
new->n = n;
new->next = *head;
*head = new;
return (new);
}
