#include "lists.h"
#include <stdio.h>

/**
 * print_listint - Entry point
 *
 *  * @h: linked list head
 *
 * Description: Function that prints all the elements of a listint_t list.
 *
 * Prototype: size_t print_listint(const listint_t *h);
 *
 * Return: the number of nodes
 *
 */


size_t print_listint(const listint_t *h)
{
	size_t cnt = 0;

	while (h)
	{
		cnt++;
		printf("%d\n", h->n);
		h = h->next;
	}

	return (cnt);
}
