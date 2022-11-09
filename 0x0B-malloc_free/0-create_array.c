#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * create_array - create array and initialize with char c
 * @size: size of array
 * @c: initialization char
 *
 * Return: pointer to array
 */
char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int a;

	if (size == 0)

	{
		return (NULL);
	}
	else
	{
		str = malloc(size * sizeof(char));
		if (str == NULL)
		{
			return (NULL);
		}
		for (a = 0; a < size; a++)
		{
			str[a] = c;
		}

		return (str);
	}
}
