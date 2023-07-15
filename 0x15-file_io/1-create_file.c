#include "main.h"
/**
 * create_file - create file
 * @filename: filename
 * @text_content: a NULL terminated string to write the file
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd, byte_w;
	int i = 0;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);
	if (text_content != NULL)
	{
		while (text_content[i] != '\0')
			i++;
	}
	byte_w = write(fd, text_content, i);
	if (byte_w == -1)
	{
		close(fd);
		return (-1);
	}
	close(fd);
	return (1);
}
