#include "main.h"

/**
 * create_file - function that creates a file
 * @filename: input value
 * @text_content: input value
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd = 0;
	int len = 0;
	int w = 0;

	if (filename == NULL)
	{
		return (-1);
	}
	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	if (fd == -1)
	{
		perror("open");
		return (-1);
	}
	len = (text_content != NULL) ? strlen(text_content) : 0;
	if (len > 0)
	{
		w = write(fd, text_content, len);
		if (w == -1)
		{
			perror("write");
			close(fd);
			return (-1);
		}
	}
	close(fd);
	return (1);
}
