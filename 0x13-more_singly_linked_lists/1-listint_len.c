#include "lists.h"

/**
 * listint_len - returns the number of elements in a listint_t list
 * @h: A pointer to the head of the listint_t list
 *
 * Return: The number of elements in the list
 */
size_t listint_len(const listint_t *h)
{
	size_t cnt = 0;

	while (h != 0)
	{
		cnt++;
		h = h->next;
	}

	return (cnt++);
}
