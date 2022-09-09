#include <stdio.h>


/**
 * main - starts the main function
 *
 * Decription: Prints lowercase a-z except q and e
 *
 * Return: Always 0
 */
int main(void)
{
	char c;

	c = 'a';
	while (c <= 'z')
	{
		if ((c != 'e') && (c != 'q'))
		{
			putchar(c);
			c++;
		}
		else
		{
			c++;
		}
	}
	putchar('\n');
	return (0);
}
