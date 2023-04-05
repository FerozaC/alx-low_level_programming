#include "lists.h"
/**
* pop_listint - deletes the head node of a linked list
* @head:pointer to the first element in the linked list
* Return: deleted data inside element/0 if the list is empty
*/
int pop_listint(listint_t **head)
{
listint_t *tmp = *head;
int num = (*head)->n;
if (head == NULL || *head == NULL)
return (0);
*head = (*head)->next;
free(tmp);
return (num);
}
