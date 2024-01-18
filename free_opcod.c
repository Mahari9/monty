#include "monty.h"

/**
 * free_opcod - Frees stack opcode
 * @top: pointer to the top of stack
 */
void free_opcod(stack_t *top)
{
	stack_t *temp;

	while (top != NULL)
	{
		temp = top;
		top = top->next;
		free(temp);
	}
}
