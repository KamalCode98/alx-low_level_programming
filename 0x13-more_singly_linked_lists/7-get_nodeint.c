#include "lists.h"

/**
 * get_nodeint_at_index - Returns the nth node of listint_t list.
 * @head: Pointer to the head of the linstint_t list.
 * @index: Index of the node starting at 0.
 *
 * Return: The nth node of the list, or NULL if the node does not exist.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	for (i = 0; i < index && head != NULL; i++)
	{
		head = head->next;
	}

	return (head);
}
