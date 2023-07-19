#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - function prints array elements
 *
 * @array: A pointer array
 *
 * @size: total number of elem for printing
 *
 * @action: pointer to print in regular or hex
 *
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int a;

	if (array == NULL || action == NULL)
		return;

	for (a = 0; a < size; a++)
	{
		action(array[a]);
	}
}
