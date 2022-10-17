#include <stdio.h>

/**
* main - entry point
* Description - prints all single digit number of base 10 from 0
* Return: always 0
*/
int main(void)
{
	int p = '0';

		while (p <= '9')
		{
			putchar(p);
			p++;
		}
		putchar('\n');
		return (0);
}
