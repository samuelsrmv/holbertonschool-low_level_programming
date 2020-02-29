#include <stdio.h>
/**
 * main - main
 * @argc: The number of command line arguments
 * @argv: An array containing the program command line arguments
 * Return: Value
 */
int main(int argc, char *argv[])
{
int i = 0;
for (i = 0; i < argc; i++)
{
printf("%s\n", argv[i]);
}
return (0);
}
