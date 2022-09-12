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
	int x = 0;

	while (x <= '9')
	{
		putchar(x);
		x++;
	}
	putchar('\n');

	return (0);
}
