#include "lists.h"

/**
 * delete_nodeint_at_index -  function that deletes the node at index index
 * @head: input value
 * @index: input value
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *current;
	listint_t *previous;

	if (head == NULL || *head == NULL)
		return (-1);
	current = *head;
	previous = NULL;

	for (i = 0; current != NULL && i < index; i++)
	{
		previous = current;
		current = current->next;
	}
	if (current == NULL)
		return (-1);
	if (previous == NULL)
		*head = current->next;
	else
		previous->next = current->next;
	free(current);
	return (1);
}
