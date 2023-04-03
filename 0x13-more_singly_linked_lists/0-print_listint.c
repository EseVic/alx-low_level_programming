#include "lists.h"

/**
 * A function that prints all the elements of a listint_t list.
 * print_listint - prints all the elements of a linked list
 * @h: pointer to head of the list
 *
 * Return: the number of nodes
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
