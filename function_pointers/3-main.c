#include "3-calc.h"

/**
  * main - main entry point to start the program
  * @argc: number of command-arguments passed to the program
  * @argv: array of text strings containing the arguments
  *
  * Return: 0 on success, 98, 99 or 100 on error
  */

int main(int argc, char *argv[])
{
	int (*op)(int, int);
	int a;
	int b;

	if (argc != 4)
	{
		printf("Error\n");
		return (98);
	}

	a = atoi(argv[1]);
	op = get_op_func(argv[2]);

	if (op == NULL)
	{
		printf("Error\n")
		return (99);
	}
	b = atoi(argv[3]);

	if ((op == op_div || op == op_mod) && b == 0)
	{
		printf("Error\n");
		return (100);
	}

	printf("%d\n", op(a, b));
	return (0);

}
