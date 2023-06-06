#include <stdlib.h>
#include "lists.h"

/**
 * free_listint_safe - Frees a listint_t linked list.
 * @h: Pointer to the head of the list.
 *
 * Return: Size of the list that was freed.
 */
size_t free_listint_safe(listint_t **h)
{
listint_t *slow, *fast;
size_t count = 0;

slow = *h;
fast = *h;

while (slow && fast && fast->next)
{
slow = slow->next;
fast = fast->next->next;

/* Check if there's a loop */
if (slow == fast)
{
slow = *h;
while (slow != fast)
{
*h = slow->next;
free(slow);
count++;
slow = *h;
}
free(fast);
count++;
*h = NULL;
return (count);
}

free(*h);
count++;
*h = slow;
}

/* No loop, free the list normally */
while (*h)
{
slow = (*h)->next;
free(*h);
count++;
*h = slow;
}

return (count);
}

