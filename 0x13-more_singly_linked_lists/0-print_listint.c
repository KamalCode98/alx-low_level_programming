#include "lists.h"

/**
 * print_listint - Entry point
 *
 *  * @h: linked list head
 *
 * Return: the number of nodes
 *
 */


size_t print_listint(const listint_t *h)
{
	int cnt = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		cnt++;
	}

	return (cnt);
}
