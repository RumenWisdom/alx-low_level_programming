#include "main.h"

/**
 * char *_strcpy - will copy and paste input files
 *
 * @dest: destination of
 *
 * @src: file source
 *
 * Return: Always 0 (success)
 */
char *_strcpy(char *dest, char *src)
{
	int b = 0;
	int c = 0;

	while (*(src + b) != '\0')
	{
		b++;
	}
	for ( ; c < b ; c++)
	{
		dest[c] = src[c];
	}
	dest[b] = '\0';
	return (dest);
}
