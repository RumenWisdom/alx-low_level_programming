#include "function_pointers.h"

/**
 * int_index - function will return index place if comparison is true, i not -1
 *
 * @array: tpointer array
 *
 * @size: total size of elements
 *
 * @cmp: pointer to function
 *
 * Return: 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int a;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);

	for (a = 0; a < size; a++)
	{
		if (cmp(array[a]))
			return (a);
	}
	return (-1);
}
