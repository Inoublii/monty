#include "monty.h"
void check(char **rec, stack_t **stack, int a)
{

	int x = 0;
	instruction_t inout[] = {
		{"push", pushit},
		{"pall", pallit},
		{NULL, NULL}
};
(void)rec;
	(void)x;
	(void)inout;
	(void)stack;
	(void)a;
	for (x = 0; inout[x].opcode; x++)
	{
		if (!(strcmp(inout[x].opcode, rec[0])))
		{
if (!strcmp(rec[0], "push"))
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
