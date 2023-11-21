#include "lists.h"

/**
 * pop_listint - Deletes the head of node of a listint_t list
 * @head: Pointer to the head of lisint_t list
 *
 * Return: Always 0 (Success)
 */
int pop_listint(listint_t **head)
{
	int n;
	listint_t *current;

	current = *head;

	if (current == NULL)
		return (0);
	if (*head != NULL)
	{
	(*head) = current->next;
	n = current->n;
	free(current);
	}

	return (n);
}
