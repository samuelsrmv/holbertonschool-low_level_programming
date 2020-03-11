/**
 * print_name - print_name
 * @name: pointers
 * @f: pointers
 * Return: Value
 * Description: Fuction
 */
void print_name(char *name, void (*f)(char *))
{
	if ((*f) != '\0')
	{
	(*f)(name);
	}
}
