#include <stdlib.h>
#include <stdio.h>

/**
 * main - multiply tw0 numbers
 * @argc:  argument count int
 * @argv: argument vector string
 *
 * Return:0 success, 1 if error
 */

int main(int argc, char *argv[])
{
	int b;
	int mul = 1;

	if (argc > 1)
	{
		for (b = 1; b < argc; b++)
		{
			mul = mul * atoi(argv[b]);
		}
		printf("%d\n", mul);
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
