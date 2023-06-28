#include "main.h"

/**
 * _atoi - main entry
 *
 * @s: Expected input
 *
 * Return: Always 0 (success)
 */
int _atoi(char *s)
{
	int a, b, c, t, e, num;

	a = 0;
	b = 0;
	c = 0;
	t = 0;
	e = 0;
	num = 0;

	while (s[t] != '\0')
		t++;

	while (a < t && e == 0)
	{
		if (s[a] == '-')
			++b;

		if (s[a] >= '0' && s[a] <= '9')
		{
			num = s[a] - '0';
			if (b % 2)
				num = -num;
			c = c * 10 + num;
			e = 1;
			if (s[a + 1] < '0' || s[a + 1] > '9')
				break;
			e = 0;
		}
		a++;
	}
	if (e == 0)
		return (0);

	return (c);
}
