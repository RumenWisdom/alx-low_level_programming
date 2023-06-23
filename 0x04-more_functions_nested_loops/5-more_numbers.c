#include "main.h"

/**
 * more_numbers - Entry point
 *
 * Return: Always 0 (Success)
 */
void more_numbers(void)
{
	int num;
	int bum;
	for (num = 1; num <= 10; num++)
	{
		for (bum = 0; bum <= 14; bum++)
		{
			if (bum >= 10)
			{
			_putchar('1');
			_putchar(bum % 10 +'0');	
			}
		_putchar('\n');
		}
	}
}
