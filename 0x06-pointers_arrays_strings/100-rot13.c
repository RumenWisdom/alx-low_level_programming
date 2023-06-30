#include "main.h"
#include <stdio.h>

/**
 * rot13 - main function entry
 *
 * @s: intput pointer
 *
 * Return: will return *s
 */

char *rot13(char *s)
{
	int a;
	int k;
	char alpha1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char alphacom[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (a = 0; s[a] != '\0'; a++)
	{
		for (k = 0; k < 52; k++)
		{
			if (s[a] == alpha1[k])
			{
				s[a] = alphacom[k];
				break;
			}
		}
	}
	return (s);
}
