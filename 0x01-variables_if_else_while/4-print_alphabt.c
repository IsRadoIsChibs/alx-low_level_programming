#include <stdio.h>

/**
* main - entry point
* Description - prints lowercase alphabets without q and e
* Return: always 0
*/
int main(void)
{
char al = 'a';

	while (al <= 'z')
	{
		if ((al != 'q') && (al != 'e'))
		{
			putchar(al);
		}
		al++;
	}
	putchar('\n');

	return (0);
}
