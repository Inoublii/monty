#include "monty.h"
void check(char **rec, stack_t **stack, int a)
{
	int x = 0;
	instruction_t inout[] = {
		{"push", pushit},
		{"pall", pallit},
		{NULL, NULL}
};
(void)inout;
	for (x = 0; inout[x].opcode; x++)
	{
if (!strcmp(rec[0], "push"))
{
mighty = atoi(rec[1]);
inout[x].f(stack, (unsigned int)a);
break;
}
}
if (inout[x].f == NULL)
{
printf("L %d: unknown instruction %s\n", a, rec[0]);
exit(EXIT_FAILURE);
}

}
