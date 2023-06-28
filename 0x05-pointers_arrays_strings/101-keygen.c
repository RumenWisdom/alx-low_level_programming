#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num[100];
	int a, plus, b;

	plus = 0;

	srand(time(NULL));

	for (a = 0; a < 100; a++)
	{
		num[a] = rand() % 78;
		plus += (num[a] + '0');
		putchar(num[a] + '0');
		if ((2772 - plus) - '0' < 78)
		{
			b = 2772 - num - '0';
			num += b;
			putchar(b + '0');
			break;
		}
	}

	return (0);
}
