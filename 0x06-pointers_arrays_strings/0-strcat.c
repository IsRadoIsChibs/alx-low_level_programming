#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strcat - concatenates two strings
 * @dest: string input
 * @src: string input
 *
 * Return: concatenated string
 */

char *_strcat(char *dest, char *src)
{
	strcat(dest, src);

	return (dest);
}
