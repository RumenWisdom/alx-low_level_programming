#include "main.h"

/**
 * reverse_array - main entry function
 *
 * @a: array pointer
 *
 * @n: number input for arrays i.e total number of elements
 *
 * Return: Always 0 (success)
 */
void reverse_array(int *a, int n)
{
	int k;
	int j;

	for (k = 0; k < n--; k++)
	{
		j = a[k];
		a[k] = a[n];
		a[n] = j;
	}
}
