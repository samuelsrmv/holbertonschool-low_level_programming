#include <stdio.h>
#include <stdlib.h>
/**
 * main - main
 * @argc: The number of command line arguments
 * @argv: An array containing the program command line arguments
 * Return: Value
 */
int main(int argc, char *argv[])
{
int x, a, b = 0;
if (argc < 3)
{
printf("Error\n");
return (1);
}
else
{
a = atoi(argv[1]);
b = atoi(argv[2]);
x = a *b;
printf("%d\n", x);
}
return (0);
}
