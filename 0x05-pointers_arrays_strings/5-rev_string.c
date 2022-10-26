#include "main.h"
#include "string.h"

/**
 * rev_string - reverses a string
 * @s: string
 *
 * Return - reversed string
 */
void rev_string(char *s)
{
	int a, l, tmp;

	l = strlen(s);

	for  (a = 0; a < l / 2; a++)
	{
		tmp = s[a];
		s[a] = s[l - a - 1];
		s[l - a - 1] = tmp;
	}

}
