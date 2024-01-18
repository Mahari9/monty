#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "monty.h"

/**
 * add - Add the top two elements of the stack
 * @top: Pointer to the top of stack
 * @lin_num: Number of line
 */
void add(stack_t **top, unsigned int lin_num)
{
	stack_t *tmp;

	if (!top || !(*top) || !(*top)->next)
	{
		fprintf(stderr, "L%d: can't add, stack too short\n", lin_num);
		exit(EXIT_FAILURE);
	}

	tmp = *top;
	tmp->next->n += tmp->n;
	pop(top, lin_num);
}
