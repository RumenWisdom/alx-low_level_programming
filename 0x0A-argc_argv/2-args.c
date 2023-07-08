#include <stdio.h>
#include "main.h"

/**
 * main - function will print arguments it receives
 *
 * @argc: given number of arguments
 *
 * @argv: Arguments array
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int a;

	for (a = 0; a < argc; a++)
	{
		printf("%s\n", argv[a]);
	}

	return (0);
}
