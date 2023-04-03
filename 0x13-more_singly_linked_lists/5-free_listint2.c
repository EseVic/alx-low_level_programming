/*
 * File: 5-free_listint2.c
 * Auth: Victoria E Iria
 * A programme that frees a listint_t list.
 */

#include "lists.h"

/**
 * free_listint2 - Frees a listint_t list.
 * @head: A pointer to the address of the
 *        head of the listint_t list.
 *
 * Description: Sets the head to NULL.
 */

void free_listint2(listint_t **head)
{
	listint_t *caret;
	listint_t **temp = head;

	if (temp != NULL)
	{
		while (*head != NULL)
		{
			caret = *head;
			free(caret);
			*head = (*head)->next;
		}

		*temp = NULL;
	}
}
