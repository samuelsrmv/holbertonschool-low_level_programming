#include <stdio.h>
#include "holberton.h"
/**
 * main - fizz buzz
 * Return: value 0
 */
int main(void)
{
int i;
for (i = 1; i < 101; i++)
{
if ((i % 3 == 0) && (i % 5 == 0))
{
printf("FizzBuzz ");
}
else if (i % 3 == 0)
{
printf("Fizz ");
}
else if (i % 5 == 0)
{
if (i == 100)
{
printf("Buzz");
}
else
{
printf("Buzz ");
}
}
else if (!(i % 3 == 0 || i % 5 == 0))
{
printf("%d ", i);
}
}
printf("\n");
return (0);
}
