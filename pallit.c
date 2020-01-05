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
(void)x;
if (!h)
return;
while (h)
{
printf("%d \n", h->n);
h = h->next;


}
