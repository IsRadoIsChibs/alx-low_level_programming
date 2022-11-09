#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 *
 *
 *
 *
 */
char *create_array(unsigned int size, char c)
{
	char *str;
	int a;
	
	if (size == 0)
	
	{
		return(NULL);
	}
	else
	{
		str = malloc(size * sizeof(char));
		for (a = 0; a < size; a++)
		{
			str[a] = c;
		}
		
		return (str);
	}
}
