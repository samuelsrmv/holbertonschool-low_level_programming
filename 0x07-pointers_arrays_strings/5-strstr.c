#include "holberton.h"
/**
 * _strstr - pointer
 * @haystack: pointers
 * @needle: pointers
 * Return: value
 */
char *_strstr(char *haystack, char *needle)
{
int i = 0, j = 0, a = 0;
while (haystack[a] != '\0')
{
i = a;
j = 0;
while (haystack[i] != '\0' && needle[j] != '\0' && haystack[i] == needle[j])
{
i++;
j++;
}
if (needle[j] == '\0')
return (haystack + a);
a++;
}
return ('\0');
}
