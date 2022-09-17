#include <stdio.h>

/**
 * main - finds and sums even valued fib numbers under 4000000
 * Return: 0
 */

int main(void)
{
	long int f, s, sum, tot;

	sum = 0;
	tot = 0;
	s = 1;
	f = 0;

	while (sum < 4000000)
	{
		sum = f + s;
		if (sum % 2 == 0)
		{
			tot += sum;
		}
		f = s;
		s = sum;
	}
	printf("%ld\n", tot);

	return (0);
}
