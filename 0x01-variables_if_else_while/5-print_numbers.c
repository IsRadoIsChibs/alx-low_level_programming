#include <stdio.h>

/**
* main - entry point
* Description - prints all single digit number of base 10 from 0
* Return: always 0
*/
int main(void)
{
	int i = 0;

	while (i < 10)
	{
		printf("%d", i);
		i++;
	}
	printf ("\n");
	return (0);
}
