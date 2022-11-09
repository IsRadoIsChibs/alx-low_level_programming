#include <stdio.h>
#include "main.h"
#include <string.h>
#include <stdlib.h>

/**
 * _strdup - duplicates strings
 * @str: given string
 *
 * Return: pointer to duplicated string, NULL if insufficient mem
 */
char *_strdup(char *str)
{
	char *p;

	if (str == 0)
	{
		return (NULL);
	}
	else
	{
		p = strdup(str);
		return (p);
	}
}

