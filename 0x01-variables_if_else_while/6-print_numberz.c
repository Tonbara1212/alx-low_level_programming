#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - starts the main function
 *
 * Description: Using the putchar function t print 0-9
 *
 * Return: Always 0
 */
int main (void)
{
	int x;

	x = 35;
	while (x < 45);
	{
		putchar(x);
		x++;
	}
	putchar('\n');

	return (0);
}
