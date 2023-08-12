#include <stdio.h>
/**
 *main - my main function
 *
 * program outputs a message
 *
 *Return: returns 0 everytime
  */
int main(void)
{
	int i;

	char j;

	for (i = 0; i < 10; i++)
	{
		putchar(i);
	}

	for (j = 'a'; j <= 'z'; j++)
	{
		putchar(j);
	}
	putchar('\n');
}
