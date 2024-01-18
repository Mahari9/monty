#ifndef MONTY_H
#define MONTY_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO
 */
typedef struct stack_s
{
	int n;
	struct stack_s *prev;
	struct stack_s *next;
} stack_t;

/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO
 */
typedef struct instruction_s
{
	char *opcode;
	void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;

int main(int argc, char **argv);
void push(stack_t **top, int data);
void pall(const stack_t *top);
void pint(stack_t *top, unsigned int lin_num);
void pop(stack_t **top, unsigned int lin_num);
void swap(stack_t **top, unsigned int lin_num);
void add(stack_t **top, unsigned int lin_num);
void nop(stack_t **top, unsigned int lin_num);
void sub(stack_t **top, unsigned int lin_num);
void stack_div(stack_t **top, unsigned int lin_num);
void mul(stack_t **top, unsigned int lin_num);
void mod(stack_t **top, unsigned int lin_num);
void pchar(stack_t **top, unsigned int lin_num);
void pstr(stack_t **top);
void rotl(stack_t **top);
void rotr(stack_t **top);
void opcodes(stack_t **ptr, char *opcode, unsigned int lin_num);
int valid_int(const char *str);
void enqueue(stack_t **rear, int n);
void free_opcod(stack_t *top);
void apply_op(stack_t **top, char *opcode, unsigned int lin_num);

int FIFO;

#endif /* MONTY_H */
