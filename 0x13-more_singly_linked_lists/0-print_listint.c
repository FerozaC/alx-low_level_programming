#include "lists.h"

/**
*print_listint - Prints all the elements of a linked list of type listint_t.
*@h: A pointer to the head of the linked list.
*Return: The number of nodes in the linked list.
*/
size_t print_listint(const listint_t *h)
{
const listint_t *curr.;
size_t num;

curr. = h;
num = 0;

while (curr. != NULL)
{
printf("%d\n", curr.->n);
num++;
curr. = curr.->next;
}

return (num);
}
