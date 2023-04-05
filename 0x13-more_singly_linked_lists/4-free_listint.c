#include "lists.h"
/**
* free_listint - frees linked list
* @head: listint_t list to be freed
*/

void free_listint(listint_t *head)
{
while (head)
{
listint_t *tmp = head;
head = head->next;
free(tmp);
}
}
