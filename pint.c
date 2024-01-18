#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "monty.h"

/**
 * pint - prints the value at the top of the stack, followed by a new line
 * @top: pointer to top of stack
 * @lin_num: Number of line
*/
void pint(stack_t *top, unsigned int lin_num)
{
	if (!top)
	{
		fprintf(stderr, "L%u: can't pint, stack empty\n", lin_num);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", top->n);
}
