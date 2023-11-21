#include "lists.h"

/**
 * free_listint2 - Frees listint_t list
 * @head : Pointer to a pointer of the head of listint_t list
 *
 */

void free_listint2(listint_t **head)
{
	listint_t *current;

	if (head == NULL)
		return;

	while (*head != NULL)
	{
		current = *head;
		*head = (*head)->next;
		free(current);
	}

	head = NULL;
}
