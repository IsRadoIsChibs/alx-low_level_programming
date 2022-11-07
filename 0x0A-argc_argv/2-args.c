#include <stdlib.h>
#include <stdio.h>

/**
 * main - prints argument  vectors passed on the program
 * @argc:  argument cout int
 * @argv: argument vector string
 */

int main(int argc, char* argv[])
{
	int b;
	
	for(b=0; b < argc; b++)
	{
		printf("%s\n", argv[b]);
	}
	return 0;
}
