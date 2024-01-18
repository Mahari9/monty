#include "monty.h"

/**
 * push - Push an element to top of stack
 * @top: Double pointer to the top of stack
 * @data: Integeral data to be added to stack
 */
void push(stack_t **top, int data)
{
	stack_t *stack = malloc(sizeof(stack_t));

	if (stack == NULL)
	{
		fprintf(stderr, "Error: malloc failed\n");
		exit(EXIT_FAILURE);
	}
	stack->n = data;
	stack->next = *top;
	*top = stack;
}

/**
 * pall - Prints all the values on the stack, starting from the top of the stack
 * @top: Pointer to the top of stack
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
