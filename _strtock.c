#include "monty.h"
/**
 *strtock -main
 *@x: char
 * Return: tok
 *
 */

char **strtock(char *x)
{
	const char *delimit =  " \t\n $";
	int i = 0;
	char **tokens, *tok, *dup, *first;

	first = strcp(x);
	dup = strcp(x);
	tok = strtok(first, delimit);
	i++;
	while (tok != NULL)
	{
		tok = strtok(NULL, delimit);
		i++;
	}
	tokens = malloc(sizeof(char *) * i);
	i = 0;
	tokens[i] = strtok(dup, delimit);
	while (tokens[i] != NULL)
	{
		i++;
		tokens[i] = strtok(NULL, delimit);
	}
	free(first);
	return (tokens);
}
char *strcp(char *str)
{
	char *dup = NULL;
	int counter = 0;
	int size = 0;

	if (str == NULL)
		return (NULL);

	while (str[size])
		size++;

	dup = malloc((size + 1) * sizeof(char));
	while (counter <= size)
	{
		dup[counter] = str[counter];
		counter++;
	}
	return (dup);
}
