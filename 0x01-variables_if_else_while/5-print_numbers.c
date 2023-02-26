#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - main block
 * Description: This program prints all singile digit numbers
 * in base 10 starting from 0.
 * Return: 0
 */

int main(void)
{
	char c = '0';

	while (c <= '9')
	{
		putchar (c);
		c++;
	}
	putchar ('\n');
	return (0);
}


