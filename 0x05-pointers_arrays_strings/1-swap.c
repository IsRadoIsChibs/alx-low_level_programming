#include "main.h"

/**
 * swap_int - swaps int a & b
 * @a: pointer
 * @b: pointer
 *
 * Return: void
 */
void swap_int (int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
