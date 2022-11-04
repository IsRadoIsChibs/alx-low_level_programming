#include <stdio.h>
#include "main.h"

/**
 *_print_rev_recursion - prints string in reverse
 *@s: string input
 *
 *Return: reversed string
 */
void _print_rev_recursion(char *s)
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
}
