#include <stdlib.h>
#include "dog.h"
/**
 * *new_dog - new_dog fuction
 * @name: pointers
 * @age: age
 * @owner: owner
 * Return: Value
 * Description: Fuction
 */

dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *dog;
int i, j, c;
dog = malloc(sizeof(dog_t));
if (dog == NULL)
{
return (NULL);
}
for (i = 0; name[i] != '\0'; i++)
for (j = 0; owner[j] != '\0'; j++)
dog->name = malloc(sizeof(char) * i + 1);
if (dog->name == NULL)
{
free(dog);
return (NULL);
}
dog->owner = malloc(sizeof(char) * j + 1);
if (dog->owner == NULL)
{
free(dog->name);
free(dog);
return (NULL);
}
for (c = 0; c < i; c++)
dog->name[c] = name[c];
dog->name[c] = '\0';
dog->age = age;
for (c = 0; c < j; c++)
dog->owner[c] = owner[c];
dog->owner[c] = '\0';
return (dog);
}
