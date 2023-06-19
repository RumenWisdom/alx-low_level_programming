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
			if (num >= bum)
			{
				continue;
			}
			putchar(num);
			putchar(bum);
			if (num == 56 && bum == 57)
			{
				break;
			}
			putchar(',');
			putchar(' ');
		}
		putchar('\n');
	}
	return (0);
}
