#include "monty.h"

/**
 * stack_div - Divides the second top element of the stack
 * by the top element of the stack
 * @top: Double pointer to the top of stack
 * @lin_num: Number of line
*/

void stack_div(stack_t **top, unsigned int lin_num)
{
	stack_t *nw_top;

	if (!top || !(*top) || !(*top)->next)
	{
		fprintf(stderr, "L%u: can't div, stack too short\n", lin_num);
		exit(EXIT_FAILURE);
	}
	nw_top = *top;
	if (nw_top->n == 0)
	{
		fprintf(stderr, "L%u: division by zero\n", lin_num);
		exit(EXIT_FAILURE);
	}
	nw_top->next->n /= nw_top->n;
	pop(top, lin_num);
}
