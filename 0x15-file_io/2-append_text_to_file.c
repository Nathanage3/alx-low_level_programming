#include "main.h"
/**
 * append_text_to_file - append
 * @filename: filename
 * @text_content: text content
 * Return: Always 0 on success
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	int i = 0;
	int w;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);
	if (text_content == NULL)
	{
		close(fd);
		return (1);
	}
	while (text_content[i] != '\0')
		i++;
	w = write(fd, text_content, i);
	if (w == -1)
		return (-1);
	return (1);
}
