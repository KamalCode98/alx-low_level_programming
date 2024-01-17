#include "monty.h"

/**
 * push_to_stack - Pushes a node onto the stack.
 * @new_node: Pointer to the new node.
 * @line_number: Integer representing the line number of the opcode.
 */
void push_to_stack(stack_t **new_node, __attribute__((unused))unsigned int line_number)
{
    stack_t *tmp;

    if (new_node == NULL || *new_node == NULL)
        exit(EXIT_FAILURE);

    if (head == NULL)
    {
        head = *new_node;
        return;
    }

    tmp = head;
    head = *new_node;
    head->next = tmp;
    tmp->prev = head;
}

