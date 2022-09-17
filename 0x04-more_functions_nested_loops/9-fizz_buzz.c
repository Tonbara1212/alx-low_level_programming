#include <stdio.h>

/**
 * main - prints 1-100, multiples pf 3 fizz, 5 buzz and both fizz buzz
 * Return: 0
 */

int main(void)
{
	int n = 1;

	for (n = 1; n <= 100; n++)
	{
		if ((n % 3) == 0 && (n % 5) == 0)
			printf("FizzBuzz");

		else if ((n % 3) == 0)
			printf("Fizz");

		else if ((n % 5) == 0)
			printf("Buzz");

		else
			printf("%d", n);

		if (n == 100)
			continue;
		printf(" ");
	}
	printf("\n");

	return (0);
}

