#include "lists.h"

/**
 * insert_dnodeint_at_index - Insert a new node at a given position in a dlistint_t linked list.
 * @h: Pointer to a pointer to the head of the list.
 * @idx: Index of the list where the new node should be added. Index starts at 0.
 * @n: Integer to be stored in the new node.
 *
 * Return: Address of the new node, or NULL if it failed.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node, *current;
	unsigned int i;

	if (!h)
		return (NULL);

	new_node = malloc(sizeof(dlistint_t));
		if (!new_node)
			return (NULL);

	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = NULL;

    if (idx == 0)
    {
        new_node->next = *h;
        if (*h)
            (*h)->prev = new_node;
        *h = new_node;
        return new_node;
    }

    current = *h;
    for (i = 0; i < idx - 1 && current; i++)
        current = current->next;

    if (!current)
    {
        free(new_node);
        return NULL;
    }

    new_node->next = current->next;
    if (current->next)
        current->next->prev = new_node;

    new_node->prev = current;
    current->next = new_node;

    return new_node;
}
