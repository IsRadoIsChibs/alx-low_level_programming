#include "main.h"

/**
  * print_line - prints a line in terminal
  * @n: input int
  *
  * Returns: void
  */
void print_line(int n)
{
	int c = 0;

	if (n > 0)
	{
	for (; c < n; c++)
		_putchar ('_');
	}
		_putchar ('\n');
}


