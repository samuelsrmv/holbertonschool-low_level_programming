#ifndef HOLBERTON_H
#define HOLBERTON_H
/**
 * struct dog - struct dog
 * @name: value
 * @age: value
 * @owner: value
 * Return: value
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
}dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
