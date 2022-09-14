#include "main.h"

/**
 * print_last_digit - Prints the last digit of a number
 *
 * @n: number checked
 *
 * Return: Returns the value of the last digit
 */
int print_sign(int n)
{

		int last_digit = n % 10;

		if (last_digit < 0)
			last_digit *= -1;

		_putchar(last_digit + '0');

		return (last_digit);

}
