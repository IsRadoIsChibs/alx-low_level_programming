#include <stdio.h>
#include "main.h"
#include <ctype.h>
/**
 * string_toupper - converts string to uppercase
 * @*: string
 *
 * Return: char
 */

char *string_toupper(char *s)
{
	int b = 0;
	char c;
	s[b];

	while (s[b])
	{
		c = s[b];
		toupper(c);
		b++;
	}

	return (s);
}

