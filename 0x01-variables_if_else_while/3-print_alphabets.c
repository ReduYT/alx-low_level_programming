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
	for (char i = 'a'; i < 'z'; ++i)
	{
		putchar(i);
		putchar(i - 32);
		putchar("\n");
	}
	return (0);
}
