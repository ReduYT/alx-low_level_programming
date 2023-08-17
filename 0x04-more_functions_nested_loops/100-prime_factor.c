#include <stdio.h>
/**
 * main - main function
 *
 * Return: returns 0
 */
int main(void)
{
	int x = 2;
	long n = 612852475143;

	while (x != n)
	{
		if (n % x == 0)
		{
			n = n / x;
		}
		else
		{
			x++;
		}
	}
	printf("%ld\n", n);
	return (0);
}
