#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * *add_node_end - function that adds a new node at the end of a list_t list
 * @head: input value
 * @str: input value
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *current;
	list_t *current2 = *head;
	unsigned int len = 0;

	while (str[len])
		len++;
	current = malloc(sizeof(list_t));
	if (current == NULL)
		return (NULL);

	current->str = strdup(str);
	current->len = len;
	current->next = NULL;

	if (*head == NULL)
	{
		*head = current;
		return (current);
	}

	while (current2->next)
		current2 = current2->next;
	current2->next = current;

	return (current);
}
