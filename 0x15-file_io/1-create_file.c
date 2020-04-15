#include "holberton.h"
/**
 *create_file - function
 *@filename: pointer
 *@text_content: pointer
 * Return: int.
 */
int create_file(const char *filename, char *text_content)
{
	int fd, i, wd;


	fd = open(filename, O_CREAT | O_TRUNC | O_WRONLY, 0600);
	if (fd == -1)
	{
		return (-1);
	}
	if (text_content == NULL)
	{
		text_content = "";
	}
	i = 0;
	while (text_content[i])
	{
		i++;
	}
	wd = write(fd, text_content, i);
	if (wd == -1)
	{
		return (-1);
	}
	close(fd);
	return (1);
}
