#include <stdio.h>
#include <stdlib.h>

/**
 * main - main block
 * Description: This program prints the alphabet in lower case
 * followed by a new line.
 * Prints all the alphabets except q and e.
 * Return: 0
 */

int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		if (c != 'e' && c != 'q')
		{
			putchar (c);
		}
		c++;
	}
	putchar ('\n');
	return (0);
}

