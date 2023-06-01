#include <stddef.h>
#include "lists.h"

/**
 * list_len - Returns the number of elements in a linked list.
 * @h: Pointer to the head of the list.
 *
 * Return: The number of elements in the list.
 */
size_t list_len(const list_t *h)
{
size_t nodecount = 0;

/* Traverse the list and increment count for each element*/
while (h != NULL)
{
nodecount++;
h = h->next;
}

return (nodecount);
}
