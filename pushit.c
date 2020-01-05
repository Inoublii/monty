#include "monty.h"
/**
 * pushit - main
 * @stack: stack
 * @x: int
 */

void pushit(stack_t **stack, unsigned int x)
	{
stack_t *new = malloc(sizeof(stack_t));
char *arg = NULL;
(void)x;
if (!new)
	{
	fprintf(stderr, "Error: malloc failed\n");
exit(EXIT_FAILURE);
		}
new->n = atoi(arg);
	new->next = (*stack);
new->prev = NULL;
		if (*stack)
			(*stack)->prev = new;
	*stack = new;
	}

