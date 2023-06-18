#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num;
	int bum;

	for (num = 48; num <= 57; num++)
	{
		for (bum = 49; bum <= 57; bum++)
		{
			putchar(num);
			putchar(bum);
			putchar(',');
			putchar(' ');
		}
	}
	return (0);
}
