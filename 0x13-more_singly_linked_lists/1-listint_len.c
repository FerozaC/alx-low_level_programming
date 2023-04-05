#include "lists.h"

/**
*listint_len: returns the count of nodes
*@h: pointer to the head of the linked list (of type listint_t) to traverse
*Return: the number of nodes in the linked list
*/
size_t listint_len(const listint_t *h)
{
size_t n = 0;

while (h != NULL)
{
n++;
h = h->next;
}

return (n);
}

