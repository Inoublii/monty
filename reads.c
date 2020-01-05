#include "monty.h"
/**
 *
 *reads - main
 *@str:string
 *@stack:stack
 *Return: 0
 */
void reads(char *str, stack_t **stack)

	{
int count = 0;
	FILE *file = fopen(str, "r");
size_t bufsize = 0;

if (file)
{
	char *x = NULL;
		char **arg;

		(void)stack;

	while (getline(&x, &bufsize, file) != -1)
{
	count++;
arg = strtock(x);
			check(arg, stack, count);
		}
		free(x);
		fclose(file);
}
else
{
	fprintf(stderr, "Error: Can't open file, %s\n", str);
	exit(EXIT_FAILURE);
}
}
