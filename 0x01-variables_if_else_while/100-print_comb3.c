#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - main block
 * Description: This  program  prints:
 * All possible different combinations of two digits.
 * Number would be separated by ',' followed by a space.
 * The two digits would always be different.
 * 01 and 10 are considered the same combination of the two digits 0 and 1
 * This program will only rint only the smallest combination of two digits
 * Numbers will  be printed in ascending order, with two digits
 * Return: 0
 */

int main(void)
{
	int a, b;

	{
	for (a = 0; a < 10; a++)

	{
		for (b = a + 1; b <= '9'; a++)

		{
			if (a != b)

			{
				putchar (a);
				putchar (b);
			}

			if (!(a == '0' && b == '1'))

			{
				putchar (',');
				putchar (' ');
			}

		}
	}

	}

	putchar ('\n');
	return (0);

}

