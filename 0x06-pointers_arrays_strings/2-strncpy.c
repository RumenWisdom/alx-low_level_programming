#include "main.h"

/**
 * _strncpy - main entry function
 *
 * @dest: file destination input
 *
 * @src: source file input
 *
 * @n: interger input
 *
 * Return: Always 0 (success)
 */
char *_strncpy(char *dest, char *src, int n)
{
	int k;

	k = 0;
	while (k < n && src[k] != '\0')
	{
		dest[k] = src[k];
		k++;
	}
	while (k < n)
	{
		dest[k] = '\0';
		k++;
	}

	return (dest);
}
