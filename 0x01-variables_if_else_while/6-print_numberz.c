#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - main block
 * Description: This program prints all
 * single digit numbers of base 10
 * starting from 0
 * followed by a new line.
 * Return: 0
 */

int main(void)
{
	int c = 0;

	while (c <= 10)
	{
		putchar (48 + c);
		c++;
	}

	putchar ('\n');
	return (0);
}

