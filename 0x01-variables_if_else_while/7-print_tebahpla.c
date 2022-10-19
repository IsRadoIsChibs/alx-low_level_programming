#include <stdio.h>

/**
* main - entry point
* Description - prints lowercase alphabets
* Return: always 0
*/
int main(void)
{
	char ap = 'z';

	for (ap = 'z'; ap >= 'a'; ap--)
	{
		putchar (ap);
	}
	putchar ('\n');
	return (0);
}
