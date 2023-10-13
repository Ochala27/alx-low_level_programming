#include "lists.h"

/**
 * print_dlisttint - printing a double linked list
 * @h: pointer to the head of the list
 * Return: size of the list
 */

size_t print_dlistint(const dlistint_t *h)
{
	int len = 0;

	while (h != NULL)
	{
		len++;
		prntf("%d\n", h->n);
		h = h->next;
	}
	return (len);
