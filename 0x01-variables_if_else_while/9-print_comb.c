#include <stdio.h>
/**
 * main - main block
 * Description: This program prints:
 * All possiblecombination of single digit numbers
 * The numbers are separated by ',' followed by a space
 * The numbers are printed in ascending order
 * Return: return 0
 */
int main(void)
{
	int n;

	for (n = 0; n < 10; n++)
	{
		putchar(n + '0');

		if (n == 9)
		{
		}
		else
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
