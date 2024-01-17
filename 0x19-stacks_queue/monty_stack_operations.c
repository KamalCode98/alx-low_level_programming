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

/**
 * print_stack_elements - Prints the elements of the stack.
 * @stack: Pointer to a pointer pointing to the top node of the stack.
 * @line_number: Line number of the opcode (unused in this function).
 */
void print_stack_elements(stack_t **stack, __attribute__((unused))unsigned int line_number)
{
    stack_t *tmp;

    (void)line_number;

    if (stack == NULL)
        exit(EXIT_FAILURE);

    tmp = *stack;
    while (tmp != NULL)
    {
        printf("%d\n", tmp->n);
        tmp = tmp->next;
    }
}

/**
 * pop_stack_top - Removes the top node from the stack.
 * @stack: Pointer to a pointer pointing to the top node of the stack.
 * @line_number: Integer representing the line number of the opcode.
 */
void pop_stack_top(stack_t **stack, unsigned int line_number)
{
    stack_t *tmp;

    if (stack == NULL || *stack == NULL)
        more_err(7, line_number);

    tmp = *stack;
    *stack = tmp->next;

    if (*stack != NULL)
        (*stack)->prev = NULL;

    free(tmp);
}