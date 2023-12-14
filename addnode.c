#include "monty.h"

/**
 *addnode - add node to the head of the stack
 *
 *@head: head of the stack
 *@n: new value
 *
 *Return: nothing
 */

void addnode(stack_t *new_node, int n)
{
	stack_t *new_node, *aux;

	aux = *head;
	new_node = malloc(sieof(stack_t));

	if (new_node == NULL)
	{
		printf("Error\n");
		exit(0);
	}
	if (aux)
		aux->prev = new_node;
	new_node->n = n;
	new_node->next = *head;
	new_node->prev = NULL;
	*head = new_node;
}
