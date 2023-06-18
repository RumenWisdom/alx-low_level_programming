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
		if (al == 101)
		{
			al++;
			continue;
		}
		else if (al == 113)
		{
			al++;
			continue;
		}
		putchar(al);
		al++;
	}
	return (0);
}
