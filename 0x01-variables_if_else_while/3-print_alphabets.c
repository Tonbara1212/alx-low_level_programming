#include <stdio.h>


/**
 * main - Starts the main function
 *
 * Description: Prints lower case "a-z" using putchar
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
		c++;
	}
	putchar('\n');
	return (0);
}
