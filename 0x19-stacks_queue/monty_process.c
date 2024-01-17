#include "monty.h"

/**
 * read_and_process_file - Reads and processes a Monty byte code file
 * @file_path: The path of the Monty byte code file
 * Return: void
 */
void read_and_process_file(char *file_path)
{
    FILE *file_descriptor = fopen(file_path, "r");

    if (file_path == NULL || file_descriptor == NULL)
        err(2, file_path);

    process_file(file_descriptor);

    fclose(file_descriptor);
}

/**
 * read_and_parse_file - Reads and parses Monty byte code instructions from a file
 * @file_descriptor: Pointer to the file descriptor
 * Return: void
 */
void read_and_parse_file(FILE *file_descriptor)
{
    int line_number, format = 0;
    char *buffer = NULL;
    size_t len = 0;

    for (line_number = 1; getline(&buffer, &len, file_descriptor) != -1; line_number++)
    {
        format = parse_line(buffer, line_number, format);
    }
    
    free(buffer);
}

/**
 * process_instruction_line - Processes a line of Monty byte code to determine the operation
 * @line: Line from the Monty byte code file
 * @line_number: Line number
 * @format: Storage format (0 for stack, 1 for queue)
 * Return: Updated storage format (0 for stack, 1 for queue)
 */
int process_instruction_line(char *line, int line_number, int format)
{
    char *opcode, *value;
    const char *delim = "\n ";

    if (line == NULL)
        err(4);

    opcode = strtok(line, delim);
    if (opcode == NULL)
        return format;

    value = strtok(NULL, delim);

    if (strcmp(opcode, "stack") == 0)
        return 0;
    if (strcmp(opcode, "queue") == 0)
        return 1;

    find_func(opcode, value, line_number, format);

    return format;
}

/**
 * execute_opcode_function - Execute the function associated with the given opcode
 * @opcode: Opcode to be executed
 * @value: Argument of the opcode
 * @line_number: Line number in the Monty byte code file
 * @format: Storage format (0 for stack, 1 for queue)
 * Return: void
 */
void execute_opcode_function(char *opcode, char *value, int line_number, int format)
{
    int i;
    int flag;

    instruction_t func_list[] = {
        {"push", add_to_stack},
        {"pall", print_stack},
        {"pint", print_top},
        {"pop", pop_top},
        {"nop", nop},
        {"swap", swap_nodes},
        {"add", add_nodes},
        {"sub", sub_nodes},
        {"div", div_nodes},
        {"mul", mul_nodes},
        {"mod", mod_nodes},
        {"pchar", print_char},
        {"pstr", print_str},
        {"rotl", rotl},
        {"rotr", rotr},
        {NULL, NULL}
    };

    if (opcode[0] == '#')
        return;

    for (flag = 1, i = 0; func_list[i].opcode != NULL; i++)
    {
        if (strcmp(opcode, func_list[i].opcode) == 0)
        {
            call_function(func_list[i].f, opcode, value, line_number, format);
            flag = 0;
        }
    }

    if (flag == 1)
        err(3, line_number, opcode);
}

/**
 * execute_function - Calls the specified function based on the opcode
 * @function_pointer: Pointer to the function that is about to be called
 * @opcode: String representing the opcode
 * @value: String representing a numeric value
 * @line_number: Line number for the instruction
 * @format: Format specifier (0 for stack, 1 for queue)
 */
void execute_function(op_func function_pointer, char *opcode, char *value, int line_number, int format)
{
    stack_t *node;
    int flag;
    int i;

    flag = 1;

    if (strcmp(opcode, "push") == 0)
    {
        if (value != NULL && value[0] == '-')
        {
            value = value + 1;
            flag = -1;
        }

        if (value == NULL)
            err(5, line_number);

        for (i = 0; value[i] != '\0'; i++)
        {
            if (isdigit(value[i]) == 0)
                err(5, line_number);
        }

        node = create_node(atoi(value) * flag);

        if (format == 0)
            function_pointer(&node, line_number);
        if (format == 1)
            add_to_queue(&node, line_number);
    }
    else
    {
        function_pointer(&head, line_number);
    }
}
