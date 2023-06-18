#include <stdio.h>

/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{
	int al = 97;
	int AL = 65;

	while (al <= 122)
	{
		putchar(al);
		al++;
	}
	while (AL <= 90)
	{
		putchar(AL);
		AL++;
	}
	putchar('\n');
	return (0);
}
