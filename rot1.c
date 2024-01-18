#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "monty.h"

/**
 * rotl - Rotates the stack from to bottom to the top
 * @top: Double pointer to the top of stack
 */
void rotl(stack_t **top)
{
	stack_t *temp, *last;

	if (*top != NULL && (*top)->next != NULL)
	{
		temp = *top;
		*top = (*top)->next;
		last = *top;

		while (last->next != NULL)
		{
			last = last->next;
		}
		last->next = temp;
		temp->prev = last;
		temp->next = NULL;
		(*top)->prev = NULL;
	}
}
