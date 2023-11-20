#include "lists.h"
#include <stdlib.h>


/**
 * add_nodeint - Adds a new node at the beginning of the list
 * @head: A point to a pointer to the head of the list
 * @n: The integer to be stored in the new node
 *
 * Return: The adress of the new element, or NULL if it failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	struct listint_s *newNode;

	newNode = malloc(sizeof(struct listint_s));

	if (newNode == NULL)
		return (NULL);

	newNode->n = n;

	newNode->next = *head;

	*head = newNode;

	return (newNode);
}
