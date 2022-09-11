#include<stdio.h>

/**
 * main - starts the main function
 *
 * Description: Print numbers in base 16
 *
 * Return: 0
 */
int main(void)
{
	char w = 'a';
	char x = '0';

	while (x <= '9')
	{
		putchar(x);
		x++;
	}
	while (w <= 'f')
	{
		putchar(w);
		w++;
	}
	putchar('\n');
	return (0);
}
