#ifndef HOLBERTON_H
#define HOLBERTON_H
/**
 * struct dog - struct dog
 * @name: value
 * @age: value
 * @owner: value
 * Return: value
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
