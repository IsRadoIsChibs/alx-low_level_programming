#include <stdio.h>

/**
 * main - entry point
 * Description - prints alphabets all both cases
 * Return: always 0
*/
int main(void)
{
	char lo = 'a';
	char up = 'A';

	while (lo <= 'z')
{
		putchar(lo);
		lo++;
	}

	while (up <= 'Z')
	{
		putchar(up);
		up++;
	}
	putchar('\n');

	return (0);
}
