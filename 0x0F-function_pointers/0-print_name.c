#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - function will utilise function pointer to print name
 *
 * @name: string
 *
 * @f: function pointer
 *
 * Return: void
 **/
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}