#include "lists.h"

/**
 * add_nodeint - function that adds a new node at the beginning of a listint_t
 * @head: input value
 * @n: input value
 * Return: the address of the new element, or NULL if it failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *current;

	current = malloc(sizeof(listint_t));
	if (current == NULL)
		return (NULL);

	current->n = n;
	current->next = *head;
	*head = current;

	return (current);
}
