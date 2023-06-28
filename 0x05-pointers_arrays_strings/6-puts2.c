#include "main.h"
/**
 * puts2 - main entry function
 *
 * @str: expected input
 *
 * Return: ALways 0 (success)
 */
void puts2(char *str)
{
	int num = 0;
	int d = 0;
	char *a = str;
	int i;

	while (*a != '\0')
	{
		a++;
		num++;
	}
	d = num - 1;
	for (i = 0 ; i <= d ; i++)
	{
		if (i % 2 == 0)
	{
		_putchar(str[i]);
	}
	}
	_putchar('\n');
}
