#include <stdio.h>
#include "main.h"

/**
 * main - Function prints number of arguments
 *
 * @argc: total number of arguments passed
 *
 * @argv: Arguments array
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
(void) argv;
	printf("%d\n", argc - 1);

	return (0);
}
