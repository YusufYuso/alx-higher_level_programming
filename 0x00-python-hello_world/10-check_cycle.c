#include "lists.h"

/**
 * check_cycle - Checks if a singly linked list has a cycle in it.
 * @list: A pointer to the head of the linked list.
 *
 * Return: 0 if there is no cycle, 1 if there is a cycle
 */
int check_cycle(listint_t *list)
{
	listint_t *step_ptr = list;
	listint_t *steps = list;

	if (list == NULL || list->next == NULL)
		return (0);

	while (step_ptr && steps && steps->next)
	{
		step_ptr = step_ptr->next;		 /* Move one step at a time */
		steps = steps->next->next; /* Move two steps at a time */

		if (step_ptr == steps) /* If they meet, there's a cycle */
			return (1);
	}

	return (0); /* If we reach the end, there's no cycle */
}
