#include "main.h"

/**
 * _strcat - Entry point
 *
 * @dest - file destination
 *
 * @src - file source
 *
 * Return: Always 0 (Success)
 */
char *_strcat(char *dest, char *src)
{
	int a;
	int k;

	a = 0;
	while (dest[a] != '\0')
	{
		i++;
	}
	k = 0;
	while (src[k] != '\0')
	{
		dest[a] = src[k];
		a++;
		k++;
	}

	dest[a] = '\0';
	return (dest);
}
