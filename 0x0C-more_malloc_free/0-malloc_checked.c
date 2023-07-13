#include <stdlib.h>
#include "main.h"

/**
 * *malloc_checked - function will allocate memory
 *
 * @b: Number of bytes
 *
 * Return: memory pointer
 */
void *malloc_checked(unsigned int b)
{
	void *mem;

	mem = malloc(b);

	if (mem == NULL)
		exit(98);

	return (mem);
}
