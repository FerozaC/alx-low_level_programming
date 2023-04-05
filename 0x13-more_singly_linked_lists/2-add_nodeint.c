#include "lists.h"

/**
 * add_nodeint - Adds a new node with the given data
 * @head: Double pointer to the first node in the list
 * @n: Data to be inserted in the new node
 *
 * Return: Pointer to the new node, or NULL if memory allocation fails
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));
	if (!new_node)
		return (NULL);

	new_node->n = n;
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
