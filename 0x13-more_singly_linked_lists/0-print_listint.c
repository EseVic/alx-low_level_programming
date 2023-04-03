/*
 * File: 0-print_listint.c
 * Auth: Victoria E Iria
 * A programme that prints all the elements of a listint_t list.
 */

#include "lists.h"
#include <stdio.h>

/**
 * print_listint - Prints all the elements of a listint_t list.
 * @h: A pointer to the head of the list_t list.
 *
 * Return: The number of nodes in the list_t list.
 */

size_t print_listint(const listint_t *h)
{
	const listint_t *newnode = h;
	size_t count = 0;

	while (newnode != NULL)
	{
		printf("%d\n", newnode->n);
		count += 1;
		newnode = newnode->next;
	}
	return (count);
}
