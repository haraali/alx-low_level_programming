#include "lists.h"

/**
 * pop_listint - function that deletes the head node of a listint_t linked list
 * and returns the head node’s data (n)
 * @head: input value
 * Return: 0
 */
int pop_listint(listint_t **head)
{
	int num;
	listint_t *temp;

	if (!head || !*head)
		return (0);
	num = (*head)->n;
	temp = (*head)->next;

	free(*head);
	*head = temp;

	return (num);
}
