#include "main.h"
#include <stdio.h>

/**
 * _strncat - concatenates two strings
 * @dest: string input
 * @src:string input
 * @n: bytes input
 *
 * Return: Concatebated string
 */

char *_strncat(char *dest, char *src, int n)
{
	strncat(dest, src, n);

	return (dest);
}
