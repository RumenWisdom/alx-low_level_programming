#include "main.h"

/**
 * swap_int - swaps the values of two intgers
 * @a: int a
 * @b: int b
 */
void swap_int(int *a, int *b)

{
	int q;

	q = *b;
	*a = *b;
	*b = q;
}
