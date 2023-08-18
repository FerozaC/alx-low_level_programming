#include "lists.h"

/**
* get_dnodeint_at_index - Returns the nth node of a dlistint_t linked list.
* @head: Pointer to the head of the list.
* @index: Index of the node to search for, starting from 0.
* Return: Nth node or NULL.
**/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
unsigned int node_count;
dlistint_t *current_node;

node_count = 0;
if (head == NULL)
return (NULL);

current_node = head;
while (current_node)
{
if (index == node_count)
return (current_node);
node_count++;
current_node = current_node->next;
}

return (NULL);
}

