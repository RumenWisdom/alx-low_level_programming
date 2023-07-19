#include <stdlib.h>
#include "dog.h"

/**
 * _strlen - function will return the total string length
 *
 * @s: string to be evaluated
 *
 * Return: string length
 */
int _strlen(char *s)
{
	int a;

	a = 0;

	while (s[a] != '\0')
	{
		a++;
	}

	return (a);
}

/**
 * *_strcpy - function copies the string pointed to by src
 *
 * @dest: pointer to the string buffer
 *
 * @src: string to be copied
 *
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int num, a;

	num = 0;

	while (src[num] != '\0')
	{
		num++;
	}

	for (a = 0; a < num; a++)
	{
		dest[a] = src[a];
	}
	dest[a] = '\0';

	return (dest);
}

/**
 * new_dog - function will create new dog profile
 *
 * @name: name
 *
 * @age: age
 *
 * @owner: owner of the dog
 *
 * Return: pointer to the new dog (Success), NULL otherwise
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	old_dog *dog;
	int num1, num2;

	num1 = _strlen(name);
	num2 = _strlen(owner);

	dog = malloc(sizeof(old_dog));
	if (dog == NULL)
		return (NULL);

	dog->name = malloc(sizeof(char) * (num1 + 1));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	dog->owner = malloc(sizeof(char) * (num2 + 1));
	if (dog->owner == NULL)
	{
		free(dog);
		free(dog->name);
		return (NULL);
	}
	_strcpy(dog->name, name);
	_strcpy(dog->owner, owner);
	dog->age = age;

	return (dog);
}
