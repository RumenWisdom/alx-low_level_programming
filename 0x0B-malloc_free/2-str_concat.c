#include "main.h"
#include <stdlib.h>
/**
 * str_concat - function will get end of input and do some addition
 *
 * @s1: concatenates input (1)
 *
 * @s2: concatenates input (2)
 *
 * Return: returns contenated values
 */
char *str_concat(char *s1, char *s2)
{
	char *result;
	int a, b;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	a = b = 0;
	while (s1[a] != '\0')
		a++;
	while (s2[b] != '\0')
		b++;
	result = malloc(sizeof(char) * (a + b + 1));

	if (result == NULL)
		return (NULL);
	a = b = 0;
	while (s1[a] != '\0')
	{
		result[a] = s1[a];
		a++;
	}

	while (s2[b] != '\0')
	{
		result[a] = s2[b];
		a++, b++;
	}
	result[a] = '\0';
	return (conct);
}
