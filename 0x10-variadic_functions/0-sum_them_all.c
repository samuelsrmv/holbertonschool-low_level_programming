#include <stdlib.h>
#include  <stdarg.h>
#include "variadic_functions.h"
/**
 * sum_them_all - sum_them_all
 * @n: variable
 * Return: Value
 * Description: Fuction
 */
int sum_them_all(const unsigned int n, ...)
{

	va_list argm;
	int sum = 0;
	unsigned int i;

	va_start(argm, n);
	if (n == 0)
	{
		return (0);
	}
	for (i = 0; i < n; i++)
	{
		sum += va_arg(argm, unsigned int);
	}
	va_end(argm);
	return (sum);
}
