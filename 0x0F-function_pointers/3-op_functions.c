#include "3-calc.h"
/**
  *op_add - calculates the sum of 2 numbers.
  *@a: num 1.
  *@b: num 2.
  *Return: returns sum of a and b.
  */
int op_add(int a, int b)
{
	return (a + b);
}

/**
  *op_sub - calculates a - b
  *@a: num 1.
  *@b: num 2.
  *
  *Return: returns result of a - b.
  */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
  *op_mul - calculates product of two numbers.
  *@a: num 1.
  *@b: num 2.
  *Return: product of a and b.
  */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
  *op_div - calculates the quotient of a div by b.
  *@a: num 1.
  *@b: num 2.
  *
  *Return: returns result of a/b.
  */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
  *op_mod - calculates the remainder of a divided by b.
  *@a: num 1.
  *@b: num 2.
  *
  *Return: returns remainder.
  */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
