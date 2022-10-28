#include "main.h"
#include <stdio.h>

/**
 * _strncpy - copies a string
 * @dest: string input
 * @src: strng input
 * @n: byte input
 *
 * Return: copied string
 */
char *_strncpy(char *dest, char *src, int n)
{
	strncpy(dest, src, n);

	return (dest);
}
