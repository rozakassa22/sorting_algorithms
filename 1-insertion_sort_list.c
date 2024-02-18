#include "sort.h"

/**
 * insertion_sort_list - Sorts a doubly linked list in ascending order
 *                       using the Insertion sort algorithm.
 * @list: A double pointer to the head of the doubly linked list.
 */
void insertion_sort_list(listint_t **list)
{
    if (list == NULL || *list == NULL || (*list)->next == NULL)
        return;

    listint_t *current = (*list)->next;

    while (current != NULL)
    {
        listint_t *insertion_point = current->prev;
        int key = current->n;

        while (insertion_point != NULL && insertion_point->n > key)
        {
            insertion_point->next->n = insertion_point->n;
            insertion_point = insertion_point->prev;
        }

        if (insertion_point == NULL)
        {
            (*list)->n = key;
        }
        else
        {
            insertion_point->next->n = key;
        }

        print_list(*list);
        current = current->next;
    }
}
