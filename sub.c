#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "monty.h"

/**
 * sub - Subtracts the top element of the stack
 * from the second top element of the stack
 * @top: Double pointer to top of stack
 * @lin_num: Number of line
*/
void sub(stack_t **top, unsigned int lin_num)
{
	stack_t *nw_top;

	if (!top || !(*top) || !(*top)->next)
	{
		fprintf(stderr, "L%u: can't sub, stack too short\n", lin_num);
		exit(EXIT_FAILURE);
	}

	nw_top = *top;
	nw_top->next->n -= nw_top->n;
	pop(top, lin_num);
}
