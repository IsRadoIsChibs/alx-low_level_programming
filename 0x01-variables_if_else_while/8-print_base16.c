#include <stdio.h>

/**
* main - entry point
* Description - prints numbers of base 16 lowercase
* Return: always 0
*/
int main(void)
{
	int p;
	char c;

		for (p = 48; p < 58; p++)
		{
			putchar(p);

		}
		for (c = 'a'; c <= 'f'; c++)
		{
			putchar(c);
		}
		putchar('\n');

		return (0);
}
