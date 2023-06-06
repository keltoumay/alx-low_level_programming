#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * listint_len - Returns the number of elements in a listint_t list.
 * @h: Pointer to the head of the list.
 *
 * Return: The number of elements in the list.
 */
size_t listint_len(const listint_t *h)
{
size_t count = 0;

/* Traverse the list and count the nodes */
while (h != NULL)
{
h = h->next;
count++;
}

/* Return the number of elements */
return (count);
}
