#include "main.h"

/**
  * print_numbers-- print number 0-9
  * Return: void*
  */
void print_numbers(void)
{
	char c = '0';

	for (c = '0'; c <= '9'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
