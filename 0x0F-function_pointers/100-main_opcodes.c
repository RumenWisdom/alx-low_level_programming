#include <stdio.h>
#include <stdlib.h>

/**
 * main - function will prints its own opcodes
 *
 * @argc: the number of arguments
 *
 * @argv: array of all arguments
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int size, a;
	char *arr;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	size = atoi(argv[1]);

	if (bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	arr = (char *)main;

	for (a = 0; a < size; a++)
	{
		if (a == size - 1)
		{
			printf("%02hhx\n", arr[a]);
			break;
		}
		printf("%02hhx ", arr[a]);
	}
	return (0);
}
