#include <stdio.h>
#include "lists.h"

/**
 * print_list - a linked list's whole elements are printed
 * @h: list_t list pointer for printing
 *
 * Return: the number of nodes is printed
 */
size_t print_list(const list_t *h)
{
	size_t m = 0;

	while (h)
	{
		if (!h->str)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		m++;
	}

	return (m);
}
