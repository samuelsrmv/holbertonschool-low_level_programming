#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_all - function prints
 * @format: parameters
 * Return: void
 */
void print_all(const char * const format, ...)
{
	char *p;
	int i = 0, flags = 1;
	va_list list;

	va_start(list, format);
	while (format && format[i])
	{
		switch (format[i])
		{
		case 'c':
			printf("%c", va_arg(list, int));
			break;
		case 'i':
			printf("%d", va_arg(list, int));
			break;
		case 'f':
			printf("%f", va_arg(list, double));
			break;
		case 's':
			p = va_arg(list, char*);
			if (p != NULL)
			{
				printf("%s", p);
				break;
			}
			printf("(nil)");
			break;
		default:
			flags = 0;
		}
		if (format[i + 1] != '\0' && flags)
			printf(", ");
		i++;
		flags++;
	}
	printf("\n");
	va_end(list);
}
