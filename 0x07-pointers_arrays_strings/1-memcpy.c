#include "main.h"

/**
 *_memcpy - input function for memory data

 *@dest: input memory destinatoion/storage

 *@src: input memory source
 
 *@n: number of bytes

 *Return: returns input destination
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int a = 0;
	int b = n;

	for (; a < b; a++)
	{
		dest[a] = src[a];
		n--;
	}
	return (dest);
}
