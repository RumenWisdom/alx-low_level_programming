#include "main.h"

/**
 * leet - main entry function
 *
 * @n: intrger input
 *
 * Return: returns the value n
 */
char *leet(char *n)
{
	int a, k;
	char v1[] = "aAeEoOtTlL";
	char v2[] = "4433007711";

	for (a = 0; n[a] != '\0'; a++)
	{
		for (k = 0; k < 10; k++)
		{
			if (n[a] == v1[k])
			{
				n[a] = v2[k];
			}
		}
	}
	return (n);
}
