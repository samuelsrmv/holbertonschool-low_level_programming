#include "holberton.h"
/**
 * read_textfile - function
 *@filename: pointer
 *@letters: size_t
 * Return: ssize_t.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t nr_bytes, fdwrite;
	int d;
	char *s;

	if (filename == NULL)
	{
		return (0);
	}
	d = open(filename, O_RDONLY);
	if (d == -1)
	{
		return (0);
	}
	s = malloc(sizeof(char) * letters);
	if (s == NULL)
	{
		return (0);
	}
	nr_bytes = read(fd, s, letters);
	if (nr_bytes == -1)
	{
		return (0);
	}
	fdwrite = write(STDOUT_FILENO, s, nr_bytes);
	if (fdwrite == -1)
	{
		return (0);
	}

	close(d);
	return (nr_bytes);

}
