#include "lists.h"
/**
 * add_node - adds a new node at the beginning
 * of a list_t list.
 * @head: head of the linked list.
 * @str: string to store in the list.
 * Return: address of the head.
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	size_t nchar;
<<<<<<< HEAD

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	new->str = strdup(str);

	for (nchar = 0; str[nchar]; nchar++)
		;

	new->len = nchar;
	new->next = *head;
	*head = new;

=======
	
	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	
	new->str = strdup(str);
	
	for (nchar = 0; str[nchar]; nchar++)
		;
	new->len = nchar;
	new->next = *head;
	*head = new;
	
>>>>>>> 873b5e048b9c8e4743fa63d98cb2c3d81f919a19
	return (*head);
}
