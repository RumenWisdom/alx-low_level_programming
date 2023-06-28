#include "main.h"

/**
 * print_array - main function array
 *
 * @a: expected array input (name)
 *
 * @n: expected number number input
 *
 * Return: Always 0 (success)
 */
void print_array(int *a, int n)
{
	int c;

	for (c = 0; c < (n - 1); c++)
	{
		printf("%d, ", a[c]);
	}
		if (c == (n - 1))
		{
			printf("%d", a[n - 1]);
		}
			printf("\n");
}
