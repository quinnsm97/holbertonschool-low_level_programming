#include "3-calc.h"

/**
  * main - main entry point to start the program
  * @argc: number of command-arguments passed to the program
  * @argv: array of text strings containing the arguments
  *
  * Return: always 0
  */

int main(int argc, char *argv[])
{
	int (*op)(int, int);
	int a;
	int b;

	if (argc != 4)
	{
		return (0);
	}

	a = atoi(argv[1]);
	op = get_op_func(argv[2]);
	if (op == NULL)
	{
		return (0);
	}
	b = atoi(argv[3]);

	printf("%d\n", op(a, b));
	return (0);

}
