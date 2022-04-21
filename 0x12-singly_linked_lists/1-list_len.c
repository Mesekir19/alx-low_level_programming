#include "lists.h"
/**
 * list_len - returns then number of elements in a list.
 * @h: singly linked list.
 * Return: number of elements in the list.
 */

size_t list_len(const list_t *h)
{
	size_t nelem;
<<<<<<< HEAD

=======
>>>>>>> 873b5e048b9c8e4743fa63d98cb2c3d81f919a19
	nelem = 0;
	while (h != NULL)
	{
		h = h->next;
		nelem++;
	}
	return (nelem);
}
