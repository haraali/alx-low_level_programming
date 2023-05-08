#include "main.h"

/**
 * read_textfile - function that reads a text file and prints it to
 * the POSIX standard output
 * @filename: input value
 * @letters: input value
 * Return: the actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fd;
	char *buff;
	ssize_t t;
	ssize_t w;

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		return (0);
	}
	buff = malloc(sizeof(char) * letters);
	t = read(fd, buff, letters);
	w = write(STDOUT_FILENO, buff, t);

	free(buff);
	close(fd);
	return (w);
}

