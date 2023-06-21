#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
void print_alphabet(void)
{
	int alpha;
	for (alpha = 97; alpha >= 122; alpha++)
	{
		putchar(alpha);
	}
	putchar('\n');
	return (0);
}
