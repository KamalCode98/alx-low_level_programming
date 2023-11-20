#include "lists.h"

/**
 * free_listint - Frees a listint_t list
 *
 * @head: A pointer to the head of the listint_t list
 *
 * Description: Frees listint_t list
 *
 * Return: Void
 */

void free_listint(listint_t *head)
{
	listint_t *current;

	while (head != NULL)
	{
		current = head;
		head = head->next;
		free(current);
	}
}
