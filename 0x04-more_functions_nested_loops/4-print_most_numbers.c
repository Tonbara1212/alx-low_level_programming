#include "main.c"

/**
 * print_most_numbers - prints numbers 0-9 except 2 and 4
 *
 * Return: nothing
 */
void print_most_numbers(void)
{
	int n;

	for (n = 48; n < 58; n++)
	{
		if ((n == 50) || (n == 52))
		{
			contunue;
		}
		_putchar(n);
	}
	_putchar(10);
}
