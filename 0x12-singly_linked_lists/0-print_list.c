#include <stddef.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_list - Prints all the elements of a linked list.
 * @h: Pointer to the head of the list.
 *
 * Return: The number of nodes in the list.
 */
size_t print_list(const list_t *h)
{
size_t nodecount = 0;

/* Traverse the list and print each element*/
while (h != NULL)
{
/* Check if the string is NULL and print accordingly*/
if (h->str == NULL)
printf("[0] (nil)\n");
else
printf("[%ld] %s\n", h->len, h->str);

nodecount++;
h = h->next;
}

return (nodecount);
}
