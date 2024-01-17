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
void execute_function(void (*function_pointer)(stack_t **stack, unsigned int line_number), stack_t **stack, char *opcode, char *value, int line_number, int format);

/*monty stack operations*/

void push_to_stack(stack_t **stack, unsigned int line_number);
void print_stack(stack_t **stack, unsigned int line_number);
void print_top(stack_t **stack, unsigned int line_number);
void pop_top(stack_t **stack, unsigned int line_number);
void do_nothing(stack_t **stack, unsigned int line_number);
void swap_stack_nodes(stack_t **stack, unsigned int line_number);
void add_stack_nodes(stack_t **stack, unsigned int line_number);
void sub_stack_nodes(stack_t **stack, unsigned int line_number);
void div_stack_nodes(stack_t **stack, unsigned int line_number);

/*monty string and special character operations*/

void print_char(stack_t **stack, unsigned int line_number);
void print_str(stack_t **stack, unsigned int line_number);
void rotate_left(stack_t **stack, unsigned int line_number);
void rotate_right(stack_t **stack, unsigned int line_number);

/*monty error handling*/

void handle_error(int error_code, ...);
void handle_more_error(int error_code, ...);
void handle_string_error(int error_code, ...);

/* Additional function declarations */
void process_file(FILE *file_descriptor);
int parse_line(char *buffer, int line_number, int format);
void find_func(char *opcode, char *value, int line_number, int format);
void add_to_stack(stack_t **stack, unsigned int line_number);
void multiply_stack_nodes(stack_t **stack, unsigned int line_number);
void swap_stack_nodes(stack_t **stack, unsigned int line_number);
void free_nodes(void);

#endif /* MONTY_H */
