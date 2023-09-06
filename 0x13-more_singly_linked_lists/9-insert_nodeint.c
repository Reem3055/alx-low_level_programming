#include "lists.h"

/**
<<<<<<< HEAD
 * insert_nodeint_at_index - inserts a new node in a linked list,
 * at a given position
 * @head: pointer to the first node in the list
 * @idx: index where the new node is added
 * @n: data to insert in the new node
 *
 * Return: pointer to the new node, or NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
    unsigned int i;
    listint_t *new;
    listint_t *temp = *head;

    new = malloc(sizeof(listint_t));
    if (!new || !head)
        return (NULL);

    new->n = n;
    new->next = NULL;

    if (idx == 0)
    {
        new->next = *head;
        *head = new;
        return (new);
    }

    for (i = 0; temp && i < idx; i++)
    {
        if (i == idx - 1)
        {
            new->next = temp->next;
            temp->next = new;
            return (new);
        }
        else
            temp = temp->next;
    }

    return (NULL);
=======
 * insert_nodeint_at_index - inserts a new node
 * at a given position.
 * @head: head of a list.
 * @idx: index of the list where the new node is
 * added.
 * @n: integer element.
 *
 * Return: the address of the new node, or NULL if it
 * failed.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *new;
	listint_t *h;

	h = *head;

	if (idx != 0)
	{
		for (i = 0; i < idx - 1 && h != NULL; i++)
		{
			h = h->next;
		}
	}

	if (h == NULL && idx != 0)
		return (NULL);

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;

	if (idx == 0)
	{
		new->next = *head;
		*head = new;
	}
	else
	{
		new->next = h->next;
		h->next = new;
	}

	return (new);
>>>>>>> 0a875256d2f21ef78f2c5a55fef69cdbb7982e02
}
