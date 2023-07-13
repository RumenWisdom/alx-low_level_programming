#include <stdlib.h>
#include "main.h"

/**
 * *array_range - function will create an array of integers
 *
 * @min: minimum value range
 *
 * @max: maximum value range
 *
 * Return: pointer to array
 */
int *array_range(int min, int max)
{
	int *alc;
	int a, all;

	if (min > max)
		return (NULL);

	all = max - min + 1;

	alc = malloc(sizeof(int) * alc;

	if (alc == NULL)
		return (NULL);

	for (a = 0; min <= max; a++)
		alc[a] = min++;

	return (alc);
}
