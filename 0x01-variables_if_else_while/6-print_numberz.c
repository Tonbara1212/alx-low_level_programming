#include <stdlib.h>
#include <stdio.h>

/**
 * main - starts the main function
 *
 * Description: Using the putchar function t print 0-9
 *
 * Return: Always 0
 */

int main(void)
{
	int x;

	for (x = 0; x < 10; x++)
	{
		putchar((x % 10) + '0');
	}
	putchar('\n');

	return (0);
}
