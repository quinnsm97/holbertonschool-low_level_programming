#include "variadic_functions.h"

/**
  * print_all - prints anything
  * @format:  list of types of arguments passed to the function
  */

void print_all(const char * const format, ...)
{
	va_list args;
	unsigned int i = 0;
	char *str;
	char *separator = "";

	va_start(args, format);

	while (format != NULL && format[i] != '\0')
	{
		switch (format[i])
		{
			case 'c':
				printf("%s%c", separator, va_arg(args, int));
				separator = ", ";
				break;
			case 'i':
				printf("%s%d", separator, va_arg(args, int));
				separator = ", ";
				break;
			case 'f':
				printf("%s%f", separator, va_arg(args, double));
				separator = ", ";
				break;
			case 's':
				str = va_arg(args, char *);
				if (str == NULL)
				{
					printf("%s(nil)", separator);
					separator = ", ";
				} else
				{
					printf("%s%s", separator, str);
					separator = ", ";
				}
				break;
		}
		i++;
	}
	va_end(args);
	printf("\n");
}
