#include "main.h"
#include <stdio.h>

/**
 * reverse_array - reverses element of arrays
 * @a: array
 * @n:size of array
 *
 * Return: reversed array
 */
void reverse_array(int *a, int n)
{
	int tmp;
	int b;

	for (b = 0; b < n / 2; b++)
	{
		tmp = a[b];
		a[b] = a[n - 1 - b];
		a[n - 1 - b] = tmp;
	}

}

