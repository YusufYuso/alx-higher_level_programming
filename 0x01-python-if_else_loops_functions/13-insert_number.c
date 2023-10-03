#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * insert_node - Inserts a new node at the correct position in a sorted
 *               singly linked list.
 *
 * @head: A pointer to a pointer to the head of the list.
 * @number: The integer to be inserted.
 *
 * Return: the address of the new node, or NULL if it failed
 */
listint_t *insert_node(listint_t **head, int number)
{
	listint_t *new, *node, *prev;

	if (!head)
		return (NULL);

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	new->n = number;
	new->next = NULL;

	node = *head;
	prev = NULL;

	while (node && node->n < number)
	{
		prev = node;
		node = node->next;
	}
	if (!prev)
	{
		new->next = *head;
		*head = new;
	}
	else
	{
		prev->next = new;
		new->next = node;
	}
	return (new);
}
