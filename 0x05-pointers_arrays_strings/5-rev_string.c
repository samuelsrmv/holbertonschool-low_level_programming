#include "holberton.h"
/**
 * _puts - pointers
 * @str: pointers2
 * Return: void
 */
void rev_string(char *s)
{
  int a;
  char aux[1024];
  int d = 0;
  int i;
  int m = 0;
  a = 0;
while (s[a] != '\0')
{
 a++;
}
a--;
for (d = a; d > -1; d--)
{
aux[m] = s[d];
m++;
}
for (i = 0; i < a; i++)
{ 
s[i] = aux[i];
}
}
