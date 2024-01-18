#include "monty.h"

/**
 * pchar - Prints the char at the top of the stack, followed by a new line
 * @top: Double pointer to the top of stack
 * @lin_num: Number of line
 */
void pchar(stack_t **top, unsigned int lin_num)
{
	if (!top || !(*top))
	{
		fprintf(stderr, "L%u: can't pchar, stack empty\n", lin_num);
		exit(EXIT_FAILURE);
	}
	if ((*top)->n < 0 || (*top)->n > 127)
	{
		fprintf(stderr, "L%u: can't pchar, value out of range\n", lin_num);
		exit(EXIT_FAILURE);
	}
	printf("%c\n", (char)(*top)->n);
}
