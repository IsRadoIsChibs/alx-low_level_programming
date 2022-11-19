#include "variadic_functions.h"

/**
 * sum_them_all - returns the sum of its parameters
 * @n: amount of the arguments
 *
 * Return: sum ofits parameters
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list vlist;
	unsigned int i;
	int sum;

	if (n == 0)
		return (0);

	va_start(vlist, n);

	sum = 0
	for (i = 0; i < n; i++)
	{
		sum += va_arg(vlist, int);
	}

	va_end(vlist);

	return (sum);
}
