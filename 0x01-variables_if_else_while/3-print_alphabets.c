#include <stdio.h>


/**
 * main - Starts the main function
 *
 * Description: Pints "a-z" then "A-Z"
 *
 * Return: Always 0
 */
int main(void)
{
	char c;

	c = 'a';
	while (c <= 'z')
	{
		putchar(c);
		l++;
	}
	c = 'A';
	while (c <= 'Z')
	{
		putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}
