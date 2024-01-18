#include "monty.h"

/**
 * pstr - Prints the string starting at the top of the stack
 * followed by a new line
 * @top: Double pointer to the top of stack
 */
void pstr(stack_t **top)
{
	stack_t *temp = *top;

	for (; temp; temp = temp->next)
	{
		if (temp->n < 1 || temp->n > 127)
			break;
		printf("%c", (char)temp->n);
	}
	printf("\n");
}
