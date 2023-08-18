#include "lists.h"

/**
* free_dlistint - Frees a dlistint_t list.
* @head: Pointer to the head of the list.
* Return: void.
**/
void free_dlistint(dlistint_t *head)
{
if (head == NULL)
return;

while (head->next)
{
dlistint_t *next_node = head->next;
free(head->prev);
head = next_node;
}

free(head);
}
