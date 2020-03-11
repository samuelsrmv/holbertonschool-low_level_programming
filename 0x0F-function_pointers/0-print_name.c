#include <stdlib.h>
#include "function_pointers.h"
/**
 * print_name - print_name
 * @name: pointers
 * @f: pointers
 * Return: Value
 * Description: Fuction
 */
void print_name(char *name, void (*f)(char *))
{
	(*f)(name);

}
