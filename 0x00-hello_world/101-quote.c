#include <stdio.h>

/**
* main - Entry point
* Description - prints to standard error
*
* Return: 1 (success)
*/
int main(void)
{
	fprintf(stderr, "%s", "and that piece of art is useful\"");
	fprintf(stderr, "%s", " - Dora Korpar, 2015-10-19\n");
	return (1);

}
