#include "sort.h"

/**
 * bubble_sort - Sort an array ascending order.
 * @array: An array of integers to be sorted.
 * @size: The size of the array.
 *
 * Description: Prints the array after each swap.
 */
void bubble_sort(int *array, size_t size)
{
    size_t i, len = size;
    bool is_bubbly = false;

    if (array == NULL || size < 2)
        return;

    for (; is_bubbly == false; len--)
    {
        is_bubbly = true;

        for (i = 0; i < len - 1; i++)
        {
            if (array[i] > array[i + 1])
            {
                swap_ints(array + i, array + i + 1);
                print_array(array, size);
                is_bubbly = false;
            }
        }
    }
}

/**
 * swap_ints - Swap two integers in the an array.
 * @a: The first integer to be swap.
 * @b: The second integer to be swap.
 */
void swap_ints(int *a, int *b)
{
    int temp;

    temp = *a;
    *a = *b;
    *b = temp;
}
