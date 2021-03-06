#ifndef monty_h
#define monty_h

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <unistd.h>
#include <string.h>
extern int mighty;
/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO Holberton project
 */
typedef struct stack_s
{
int n;
struct stack_s *prev;
struct stack_s *next;
} stack_t;
/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO Holberton project
 */
typedef struct instruction_s
{
char *opcode;
void (*f)(stack_t **stack, unsigned int x);
} instruction_t;
int main(int argc, char **argv);
void pallit(stack_t **stack, unsigned int x);
void pushit(stack_t **stack, unsigned int x);
void reads(char *str, stack_t **stack);
char **strtock(char *line);
char *strcp(char *str);
void popit(stack_t **stack, unsigned int x);
void pintit(stack_t **stack, unsigned int ln);
void fm(stack_t **stack);
void _nop(stack_t **stack, unsigned int x);
void check(char **rec, stack_t **stack, int a);
#endif
