#include "lists.h"
/**
* insert_nodeint_at_index - inserts new node in linked list,
* at a given position
* @head: pointer to first node in the list
* @idx: index where new node is added
* @n: data to insert in new node
* Return: pointer new node, or NULL
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
unsigned int i = 0;
listint_t *new;
listint_t *tmp = *head;
new = malloc(sizeof(listint_t));
if (!new || !head)
return (NULL);
new->n = n;
new->next = NULL;
if (idx == 0)
{
new->next = *head;
*head = new;
return (new);
}
while (tmp && i < idx - 1)
{
tmp = tmp->next;
i++;
}
if (tmp)
{
new->next = tmp->next;
tmp->next = new;
return (new);
}
return (NULL);
}
