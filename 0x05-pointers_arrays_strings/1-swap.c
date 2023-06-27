#include "main.h"
/**
 * swap_int - This is the main entry point
 *
 * @a: integer input to be swapped
 *
 * @b: Second integer input to be swapped
 *
 * Return: Always 0 (Success)
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
