#include "main.h"
#include <string.h>

/**
 * print_rev - print strng in reverse
 * @s: string iput
 *
 * Return: void
 */
void print_rev(char *s)
{
	int a = 0;

	while (s[a] != '\0')
	{
		a++;
	}
	a--;
	while (a >= 0)
	{
		_putchar(s[a]);
		a--;
	}
	_putchar('\n');
}

