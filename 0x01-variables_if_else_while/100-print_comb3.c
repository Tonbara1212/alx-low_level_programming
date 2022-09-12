#include <stdio.h>

/**
 * main - starts the main function
 *
 * description: print combinations of 0-9
 *
 * return: always 0
 */
int main(void)
	/* Body of main funtion*/
{
	int a, b;

	for (a = 0; a < 9; a++)
	{
		for (b = a + 1; b < 10; b++)
		{
			putchar((a % 10) + '0');
			putchar((b % 10) + '0');

			if (a == 8 && b == 9)
				continue;


			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');

	return (0);
}
