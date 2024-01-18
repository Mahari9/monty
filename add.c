#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "monty.h"

/**
 * add - Add the top two elements of the stack
 * @top: Double pointer to the top of stack
 * @lin_num: Number of line
 */
void add(stack_t **top, unsigned int lin_num)
{
	stack_t *temp;

	if (!top || !(*top) || !(*top)->next)
	{
		fprintf(stderr, "L%d: can't add, stack too short\n", lin_num);
		exit(EXIT_FAILURE);
	}

	temp = *top;
	temp->next->n += temp->n;
	pop(top, lin_num);
}
