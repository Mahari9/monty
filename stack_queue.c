#include "monty.h"

/**
 * opcodes - Implement the stack and queue opcodes
 * @ptr: Double pointer to top of stack || front of queue
 * @opcode: Eiether stack or queue opcode
 * @lin_num: Number of line
 * Return: Nothing
 */
void opcodes(stack_t **ptr, char *opcode, unsigned int lin_num)
{
	int value;
	char *str = NULL, *delim = " \n\t\r";

	if (strcmp(opcode, "stack") == 0)
	{
		FIFO = 0;
		return;
	}
	else if (strcmp(opcode, "queue") == 0)
	{
		FIFO = 1;
		return;
	}
	if (strcmp(opcode, "push") == 0)
	{
		str = strtok(NULL, delim);
		if (valid_int(str) == 0)
		{
			fprintf(stderr, "L%u: usage: push integer\n", lin_num);
			free_opcod(*ptr);
			exit(EXIT_FAILURE);
		}
		value = atoi(str);
		if (FIFO)
			enqueue(ptr, value);
		else
			push(ptr, value);
	}
	else
		apply_op(ptr, opcode, lin_num);
}

/**
 * valid_int - checks if a string is a valid integer
 * @str: string to be checked
 * Return: 1 if valid, 0 if not
 */
int valid_int(const char *str)
{
	if (str == NULL || *str == '\0')
		return (0);
	/* Check for sign ('+' or '-') */
	if (*str == '+' || *str == '-')
		str++;
	while (*str)
	{
		if (*str < '0' || *str > '9')
			return (0);
		str++;
	}

	return (1);
}

/**
 * enqueue - Insert an element into the queue
 * @rear: Double pointer to the rear of queue
 * @n: Integeral value to be inserted
 */
void enqueue(stack_t **rear, int n)
{
	stack_t *nw_node, *temp;

	nw_node = malloc(sizeof(stack_t));
	if (nw_node == NULL)
	{
		fprintf(stderr, "Error: malloc failed\n");
		return;
	}

	nw_node->n = n;
	nw_node->next = NULL;

	if (*rear == NULL)
	{
		nw_node->prev = NULL;
		*rear = nw_node;
		return;
	}

	temp = *rear;
	while (temp->next != NULL)
		temp = temp->next;
	temp->next = nw_node;
	nw_node->prev = temp;
}
