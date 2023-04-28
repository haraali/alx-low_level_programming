#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * *add_node - function that adds a new node at the beginning of a list_t list
 * @head: input value
 * @str: input value
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *current;
	unsigned int len = 0;

	while (str[len])
		len++;
	current = malloc(sizeof(list_t));
	if (current == NULL)
		return (NULL);
	current->str = strdup(str);
	current->len = len;
	current->next = (*head);
	(*head) = current;

	return (*head);
}
