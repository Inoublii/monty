#include "monty.h"
/**
 * pintit - main
 * @stack: stack
 *
 * @ln: unsigned int
 */
void _pint(stack_t **stack, unsigned int ln)
{
	if (*stack == NULL)
	{
		fprintf(stderr, "L%d: can't pint, stack empty", ln);
		exit(EXIT_FAILURE);
	}
	printf("%d", (*stack)->n);
}
