#include "main.h"

/**
 * print_chessboard - Entry point
 *
 * @a: array
 *
 * Return: Always 0 (Success)
 */
void print_chessboard(char (*a)[8])
{
	int k;
	int c;

	for (k = 0; k < 8; k++)
	{
		for (c = 0; c < 8; c++)
			_putchar(a[k][c]);
		_putchar('\n');
	}
}
