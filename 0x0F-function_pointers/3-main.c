#include "3-calc.h"
/**
  *main - calculates
  *@argc: number of args
  *@argv: pointers to arg
  *
  *Return: 0
  */
int main(int argc, char *argv[])
{
	int num1, num2;
	int Fnum = 0;
	char a;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	/* check if theres only one operator*/
	if (argv[2][1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}

	a = argv[2][0];
	if (a != '+' && a != '-' && a != '*' && a != '/' && a != '%')
	{
		printf("Error\n");
		exit(99);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	Fnum = (get_op_func(argv[2]))(a, b);
	printf("%d\n", Fnum);
	return (0);
}
