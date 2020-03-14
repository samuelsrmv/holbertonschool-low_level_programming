 #include <stdio.h>
#include <stdlib.h>
#include  <stdarg.h>
#include "variadic_functions.h"
/**
 * print_strings - print_strings
 * @n: variable
 * @separator: pointers
 * Return: Value
 * Description: Fuction
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list strings;
	unsigned int i;
	char *p;

	va_start(strings, n);
		for (i = 0; i < n; i++)
		{
			p = va_arg(strings, char *);
			if (p == NULL)
			{
				printf("(nil)");
			}
			else
			{
				printf("%s", p);
			}
			if (i < n - 1)
			{
				if	(separator != NULL)
					printf("%s", separator);
			}
		}
	va_end(strings);
	printf("\n");
}
