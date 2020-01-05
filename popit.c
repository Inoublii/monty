#include "monty.h"
/**
 *popit - main
 *@stack: stack
 *@x: un int
 *Return: 0
 *
 */
void popit(stack_t **stack, unsigned int x)
{
	stack_t *head;

	head = *stack;
	if (head == NULL)
	{
		printf("L%d: can't pop an empty stack\n", x);
		exit(EXIT_FAILURE);
	}
	head = (*stack)->next;
	free(*stack);
	*stack = head;
}
