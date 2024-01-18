#include "monty.h"

/**
 * apply_op - Handle the execution of different opcodes
 * @opcode: Opcode to be executed
 * @top: Double pointer to the top of stack
 * @lin_num: Number of line
 */
void apply_op(stack_t **top, char *opcode, unsigned int lin_num)
{
	if (strcmp(opcode, "pall") == 0)
		pall(*top);
	else if (strcmp(opcode, "pint") == 0)
		pint(*top, lin_num);
	else if (strcmp(opcode, "pop") == 0)
		pop(top, lin_num);
	else if (strcmp(opcode, "sub") == 0)
		sub(top, lin_num);
	else if (strcmp(opcode, "div") == 0)
		div(top, lin_num);
	else if (strcmp(opcode, "mul") == 0)
		mul(top, lin_num);
	else if (strcmp(opcode, "mod") == 0)
		mod(top, lin_num);
	else if (strcmp(opcode, "pchar") == 0)
		pchar(top, lin_num);
	else if (strcmp(opcode, "pstr") == 0)
		pstr(top);
	else if (strcmp(opcode, "add") == 0)
		add(top, lin_num);
	else if (strcmp(opcode, "nop") == 0)
		nop(top, lin_num);
	else if (strcmp(opcode, "swap") == 0)
		swap(top, lin_num);
	else if (strcmp(opcode, "rotl") == 0)
		rotl(top);
	else if (strcmp(opcode, "rotr") == 0)
		rotr(top);
	else if (strcmp(opcode, "stack") == 0)
		nop(top, lin_num);
	else
	{
		fprintf(stderr, "L%u: unknown instruction %s\n", lin_num, opcode);
		free_stack(*top);
		exit(EXIT_FAILURE);
	}
}
