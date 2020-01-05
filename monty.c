#include "monty.h"
/**
 *main - the
 *@argc: arguemts
 *@argv: std
 *Return: 0
 */

int main(int argc, char **argv)
{
stack_t **stack;

stack = malloc(sizeof(stack_t));
*stack = '\0';
(void)mighty;
if (argc >= 2 && argc <= 3)
		reads(argv[1], stack);
else
{
		fprintf(stderr, "USAGE: monty file\n");
exit(EXIT_FAILURE);
	}
fm(stack);
free(stack);
return (0);

}
