#include "main.h"

/**
  * more_numbers-- print numberx10
  * Return: void
  */
void more_numbers(void)
{
	int b;
	int c;

	for (b = 0; b < 10; b++)
	{

	for (c = 0; c < 15; c++)
	{
	if (c >= 10)
	_putchar((c / 10) + 48);
	_putchar((c % 10) + 48);

	}
		_putchar ('\n');
	}

}
