#include "lists.h"
#include <stdlib.h>
/**
 * add_nodeint_end - Adds a new node at the end of a list
 * @head: A pointer to a pointer to head of the list
 * @n: The integer to be stored in the new node
 *
 * Return: The adress of the new element, or NULL if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newNode;
	listint_t *temp;

	newNode = malloc(sizeof(listint_t));

	if (!newNode)
	{
		free(newNode);
		return (NULL);
	}

	newNode->n = n;
	newNode->next = NULL;

	if (*head == NULL)
		*head = newNode;
	else
	{

		temp = *head;
		while (temp->next != NULL)
			temp = temp->next;


		temp->next = newNode;
	}

	return (newNode);
}
