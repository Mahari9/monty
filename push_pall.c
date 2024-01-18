#include "monty.h"

/**
 * push - push an element to top of stack
 * @head: pointer to beginning of stack
 * @data: integeral data to be added to stack
 */
void push(stack_t **head, int data)
{
	stack_t *stack = malloc(sizeof(stack_t));

	if (stack == NULL)
	{
		fprintf(stderr, "Error: malloc failed\n");
		exit(EXIT_FAILURE);
	}
	stack->n = data;
	stack->next = *head;
	*head = stack;
}

/**
 * pall - prints all the values on the stack, starting from the top of the stack
 * @top: pointer to the top of stack
 */
void pall(const stack_t *top)
{
	const stack_t *curr = top;

	while (curr != NULL)
	{
		printf("%d\n", curr->n);
		curr = curr->next;
	}
}
