#include "monty.h"

/**
 * print_ascii - Prints the ASCII value.
 * @stack: Pointer to a pointer pointing to the top node of the stack.
 * @line_number: Integer representing the line number of the opcode.
 */
void print_ascii(stack_t **stack, unsigned int line_number)
{
    int ascii_value;

    if (stack == NULL || *stack == NULL)
        string_err(11, line_number);

    ascii_value = (*stack)->n;
    if (ascii_value < 0 || ascii_value > 127)
        string_err(10, line_number);

    printf("%c\n", ascii_value);
}

/**
 * print_string - Prints a string.
 * @stack: Pointer to a pointer pointing to the top node of the stack.
 * @line_number: Integer representing the line number of the opcode (unused).
 */
void print_string(stack_t **stack, __attribute__((unused))unsigned int line_number)
{
    int ascii_value;
    stack_t *current_node;

    if (stack == NULL || *stack == NULL)
    {
        printf("\n");
        return;
    }

    current_node = *stack;
    while (current_node != NULL)
    {
        ascii_value = current_node->n;
        if (ascii_value <= 0 || ascii_value > 127)
            break;
        printf("%c", ascii_value);
        current_node = current_node->next;
    }
    printf("\n");
}

/**
 * rotate_left - Rotates the first node of the stack to the bottom.
 * @stack: Pointer to a pointer pointing to the top node of the stack.
 * @line_number: Integer representing the line number of the opcode (unused).
 */
void rotate_left(stack_t **stack, __attribute__((unused))unsigned int line_number)
{
    stack_t *current_node;

    if (stack == NULL || *stack == NULL || (*stack)->next == NULL)
        return;

    current_node = *stack;
    while (current_node->next != NULL)
        current_node = current_node->next;

    current_node->next = *stack;
    (*stack)->prev = current_node;
    *stack = (*stack)->next;
    (*stack)->prev->next = NULL;
    (*stack)->prev = NULL;
}

/**
 * rotate_right - Rotates the last node of the stack to the top.
 * @stack: Pointer to a pointer pointing to the top node of the stack.
 * @line_number: Integer representing the line number of the opcode (unused).
 */
void rotate_right(stack_t **stack, __attribute__((unused))unsigned int line_number)
{
    stack_t *current_node;

    if (stack == NULL || *stack == NULL || (*stack)->next == NULL)
        return;

    current_node = *stack;

    while (current_node->next != NULL)
        current_node = current_node->next;

    current_node->next = *stack;
    current_node->prev->next = NULL;
    current_node->prev = NULL;
    (*stack)->prev = current_node;
    (*stack) = current_node;
}