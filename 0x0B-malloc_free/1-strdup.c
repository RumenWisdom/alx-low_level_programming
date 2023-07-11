#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _strdup - function will duplicate to new memory location
 *
 * @str: char
 * 
 * Return: Always 0 (success)
 */
char *_strdup(char *str)
{
	char *psi;
	int a, b = 0;

	if (str == NULL)
		return (NULL);
	a = 0;
	while (str[a] != '\0')
		a++;

	psi = malloc(sizeof(char) * (a + 1));

	if (psi == NULL)
		return (NULL);

	for (b = 0; str[b]; b++)
		psi[b] = str[b];

	return (psi);
}
