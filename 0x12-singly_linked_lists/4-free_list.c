#include <stdlib.h>
#include "lists.h"

/**
 * free_list - Frees a linked list.
 * @head: Pointer to the head of the list.
 */
void free_list(list_t *head)
{
if (head == NULL)
return;

/* Recursively free the rest of the list */
free_list(head->next);

/* Free the current node */
free(head->str);
free(head);
}
