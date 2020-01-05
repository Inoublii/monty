#include"monty.h"
/**
 * pallit - main
 * @stack: stack
 * @x: unsi int
 *
 */
void pallit(stack_t **stack, unsigned int x)
{
stack_t *h = *stack;
if (*stack == NULL)
return;
while (h)
{
printf("%d \n", h->n);
h = h->next;

}

}
