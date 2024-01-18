#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "monty.h"

/**
 * rotr - Rotates the stack to the bottom
 * @top: Double pointer to the top of stack
 * Return: void
 */
void rotr(stack_t **top)
{
	stack_t *first, *temp = *top;

	if (!top || !(*top) || !(*top)->next)
		return;
	while (temp->next->next)
		temp = temp->next;
	first = temp->next;
	temp->next = NULL;
	first->next = *top;
	*top = first;
}
