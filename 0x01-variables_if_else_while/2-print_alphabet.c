#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int al = 97;

	while (al <= 122)
	{
		putchar(al);
		al++;
	}
	putchar('\n');
	return (0);
}
