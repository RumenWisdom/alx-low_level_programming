#include <stdlib.h>
#include "main.h"

/**
 * *string_nconcat - function will concantenate two strings
 *
 * @s1: first character string
 *
 * @s2: second character string
 *
 * @n: bytes from s2 to concatenate to s1
 *
 * Return: result pointer
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *p;
	unsigned int a = 0, k = 0, alp1 = 0, alp2 = 0;

	while (s1 && s1[alp1])
		alp1++;
	while (s2 && s2[alp2])
		alp2++;

	if (n < alp2)
		p = malloc(sizeof(char) * (alp1 + n + 1));
	else
		p = malloc(sizeof(char) * (alp1 + alp2 + 1));

	if (!p)
		return (NULL);

	while (a < alp1)
	{
		p[a] = s1[a];
		a++;
	}

	while (n < alp2 && a < (alp1 + n))
		p[a++] = s2[k++];

	while (n >= alp2 && a < (alp1 + alp2))
		p[a++] = s2[k++];

	p[a] = '\0';

	return (p);
}
