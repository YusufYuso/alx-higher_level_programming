#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

int is_palindrome(listint_t **head);
void reverse_list(listint_t **head);
int compare_lists(listint_t *head1, listint_t *head2);

/**
 * is_palindrome - checks if a linked list is a palindrome
 * @head: double pointer to the head of the list
 * Return: 1 if palindrome, 0 if not
 */
int is_palindrome(listint_t **head)
{
	listint_t *slow = *head, *fast = *head, *prev = NULL;
	listint_t *second_half, *mid = NULL;
	int is_pal = 1;

	if (*head == NULL || (*head)->next == NULL)
		return (is_pal);
	while (fast != NULL && fast->next != NULL)
	{
		fast = fast->next->next;
		prev = slow;
		slow = slow->next;
	}
	if (fast != NULL)
	{
		mid = slow;
		slow = slow->next;
	}
	second_half = slow;
	prev->next = NULL;
	reverse_list(head);
	is_pal = compare_lists(*head, second_half);
	reverse_list(head);
	if (mid != NULL)
	{
		prev->next = mid;
		mid->next = second_half;
	}
	else
	{
		prev->next = second_half;
	}
	return (is_pal);
}

/**
 * reverse_list - reverses a linked list
 * @head: double pointer to the head of the list
 */
void reverse_list(listint_t **head)
{
	listint_t *prev = NULL, *current = *head, *next = NULL;

	while (current != NULL)
	{
		next = current->next;
		current->next = prev;
		prev = current;
		current = next;
	}
	*head = prev;
}

/**
 * compare_lists - compares two linked lists for equality
 * @head1: pointer to the first list
 * @head2: pointer to the second list
 * Return: 1 if equal, 0 if not
 */
int compare_lists(listint_t *head1, listint_t *head2)
{
	listint_t *temp1 = head1;
	listint_t *temp2 = head2;

	while (temp1 != NULL && temp2 != NULL)
	{
		if (temp1->n == temp2->n)
		{
			temp1 = temp1->next;
			temp2 = temp2->next;
		}
		else
		{
			return (0);
		}
	}
	if (temp1 == NULL && temp2 == NULL)
		return (1);
	return (0);
}
