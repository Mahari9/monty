#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "monty.h"

/**
 * swap - Swaps the top two elements of the stack
 * @top: Pointer to the top of stack
 * @lin_num: Number of line
 */
void swap(stack_t **top, unsigned int lin_num)
{
	int tmp;

	if (!top || !(*top) || !(*top)->next)
	{
		fprintf(stderr, "L%d: can't swap, stack too short\n", lin_num);
		exit(EXIT_FAILURE);
	}
	tmp = (*top)->n;
	(*top)->n = (*top)->next->n;
	(*top)->next->n = tmp;
}
