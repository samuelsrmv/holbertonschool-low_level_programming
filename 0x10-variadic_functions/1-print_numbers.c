#include <stdio.h>
#include <stdlib.h>
#include  <stdarg.h>
#include "variadic_functions.h"
/**
 * print_numbers - print_numbers
 * @n: variable
 * @separator: pointers
 * Return: Value
 * Description: Fuction
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{

	va_list list;
	unsigned int i;

		va_start(list, n);
			for (i = 0; i < n; i++)
			if (separator != NULL)
			{
			if (i < n - 1)
			{
				printf("%d%s", va_arg(list, const unsigned int), separator);
			}
			else
			{
			printf("%d", va_arg(list, int));
			}
			}
			else
			{
				printf("%d", va_arg(list, int));
			}
		printf("\n");
		va_end(list);
}
