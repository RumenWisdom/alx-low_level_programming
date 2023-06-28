#include "main.h"

/**
 * rev_string - main entry point
 *
 * @s: character string to be inputed
 *
 * Return: Always return 0 (success)
 */

void rev_string(char *s)
{
	char d = s[0];
	int num = 0;
	int a;

	while (s[num] != '\0')
	num++;
	for (a = 0; a < num; a++)
	{
		num--;
		d = s[a];
		s[a] = s[num];
		s[num] = d;
	}
}
