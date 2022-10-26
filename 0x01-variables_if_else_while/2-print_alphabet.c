#include <stdio.h>

/**
* main - entry point
* Description - prints reversed  alphabets
* Return: always 0
*/
int main(void)
{
	char ap = 'z';

	for (ap = 'a'; ap >= 'a'; ap--)
	{
		putchar (ap);
	}
	putchar ('\n');
	return (0);
}
