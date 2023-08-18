#include "lists.h"

/**
* insert_dnodeint_at_index - Inserts a new node at a given position.
* @h: Pointer to the head of the list.
* @idx: Index of the new node.
* @n: Value of the new node.
* Return: The address of the new node, or NULL if it failed.
*/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
dlistint_t *new_node;
dlistint_t *head = *h;
unsigned int i = 1;

new_node = NULL;

if (idx == 0)
return (add_dnodeint(h, n));

if (head != NULL)
while (head->prev != NULL)
head = head->prev;

while (head != NULL)
{
if (i == idx)
{
if (head->next == NULL)
return (add_dnodeint_end(h, n));

new_node = malloc(sizeof(dlistint_t));
if (new_node != NULL)
{
new_node->n = n;
new_node->next = head->next;
new_node->prev = head;
head->next->prev = new_node;
head->next = new_node;
}
break;
}

head = head->next;
i++;
}

return (new_node);
}

