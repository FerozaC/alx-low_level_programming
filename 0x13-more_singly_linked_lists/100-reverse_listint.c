#include "lists.h"
/**
* reverse_listint - reverses linked list
* @head: pointer to first node in the list
* Return: pointer to first node in the new list
*/
listint_t *reverse_listint(listint_t **head)
{
listint_t *prev = NULL;
listint_t *curt = *head;
listint_t *next = NULL;
for (; curt != NULL;)
{
next = curt->next;
curt->next = prev;
prev = curt;
curt = next;
}
*head = prev;

 return (*head);
}
