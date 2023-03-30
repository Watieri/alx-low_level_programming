#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_list -prins all the elements of a linked list
 * @h: pointer to the list_t lists to print
 *
 * Return: the number of nodes in h to be printed
 */
size_t print_list(const list_t *h)
{
	size_t nodes = 0;

	while (h)
	{	
		if (h->str == NULL)
			printf("[0] (nil)\n"

		else
			 printf("[%d] %s\n", h->len, h->str);

		nodes++;
		h = h->next;
	}

	return (nodes);
}
