#include "main.h"
#include <string.h>

/**
 * puts2 - print character of a string
 * @str: string
 *
 * Return: void
 */
void puts2(char *str)
{
	int a;


	for (a = 0; str[a] != '\0'; a += 2)
	{
		_putchar(str[a]);
	}
	_putchar('\n');
}

