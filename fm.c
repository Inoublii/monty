#include "monty.h"
/**
 *fm - main function
 *@stack: receives
 *Return: 0
 */
void fm(stack_t **stack)
{
	stack_t *head;

	head = *stack;
	if (!head)
		return;
	while (head->next)
	{
		head = head->next;
		free(head->prev);
	}
	free(head);
}
