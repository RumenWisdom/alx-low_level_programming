#include "main.h"
#include <stdlib.h>

/**
 * create_array -function will create array of size
 *
 * @size: size of the array
 *
 * @c: char to be assigned
 *
 * Description: create array of size
 *
 * Return: array pointer
 *
 */
char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int i;

	str = malloc(sizeof(char) * size);
	if (size == 0 || str == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		str[i] = c;
	return (str);
}
