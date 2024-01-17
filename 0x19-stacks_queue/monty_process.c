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

    // Add the necessary logic to read and process the Monty byte codes
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


