#include <stdio.h>
#include "main.h"

/**
 * main - Nmae of program will be printed by function
 *
 * @argc: Total number of arguments
 *
 * @argv: Arguments array
 *
 * Return: Always 0 (Success)
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);

	return (0);
}
