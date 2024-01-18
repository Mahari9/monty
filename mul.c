#include "monty.h"

/**
 * mul - Multiplies the second top element of the stack
 * with the top element of the stack
 * @top: Pointer to the top of stack
 * @lin_num: Number of line
 */
void mul(stack_t **top, unsigned int lin_num)
{
	stack_t *nw_top;

	if (!top || !(*top) || !(*top)->next)
	{
		fprintf(stderr, "L%u: can't mul, stack too short\n", lin_num);
		exit(EXIT_FAILURE);
	}
	nw_top = *top;
	nw_top->next->n *= nw_top->n;
	pop(top, lin_num);
}
