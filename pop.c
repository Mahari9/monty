#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "monty.h"

/**
 * pop - Removes the top element of the stack
 * @top: Double pointer to top of stack
 * @lin_num: Number of line
*/
void pop(stack_t **top, unsigned int lin_num)
{
	stack_t *temp = *top;

	if (!(*top))
	{
		fprintf(stderr, "L%u: can't pop an empty stack\n", lin_num);
		exit(EXIT_FAILURE);
	}
	*top = (*top)->next;
	free(temp);
}
