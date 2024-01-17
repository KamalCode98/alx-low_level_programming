#ifndef MONTY_H
#define MONTY_H

#define _GNU_SOURCE
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <ctype.h>

/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO
 */
typedef struct stack_s
{
        int n;
        struct stack_s *prev;
        struct stack_s *next;
} stack_t;

/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO
 */
typedef struct instruction_s
{
        char *opcode;
        void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;

/*monty file operations*/

void read_and_process_file(char *file_path);
void read_and_parse_file(FILE *file_descriptor);
int process_instruction_line(char *line, int line_number, int format);
void execute_opcode_function(char *opcode, char *value, int line_number, int format);
void execute_function(op_func function_pointer, char *opcode, char *value, int line_number, int format);

/*monty stack operations*/

void push_to_stack(stack_t **new_node, __attribute__((unused))unsigned int line_number);
void print_stack_elements(stack_t **stack, __attribute__((unused))unsigned int line_number);
void pop_stack_top(stack_t **stack, unsigned int line_number);
void print_stack_top(stack_t **stack, unsigned int line_number);

