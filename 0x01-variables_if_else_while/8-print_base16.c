#include <stdio.h>
#include <stdlib.h>

/**
 * main - main block
 * Description: This program prints all the numbers of base 16
 * in lowercase followed by a new line.
 * Return: 0
 */

int main(void)
{
	char c = '0';

	while (c <= 'f')

	{
	putchar (c);

	c++;
	}

	putchar ('\n');

	return (0);
}

