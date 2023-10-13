#include "lists.h"

/**
 * dlistint_len - printing a double linked list
 * @h: pointer to the head of the list
 * Return: size of the list
 */

size_t dlistint_len(const dlistint_t *h)
{
	int len = 0;

	whle (h != NULL)
	{
		len++;
		h = h->next;
	}
	return (len);
}
