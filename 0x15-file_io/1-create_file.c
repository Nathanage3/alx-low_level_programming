#include "main.h"
#include <sys/types.h>
/**
 * create_file - create file
 * @filename: filename
 * @text_content: a NULL terminated string to write the file
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int d, byte_w;
	mode_t permissions = S_IRUSR | S_IWUSR;

	if (filename == NULL)
		return (-1);
	d = open(filename, O_WRONLY | O_CREAT | O_TRUNC, permissions);
	if (d == -1)
		return (-1);
	if (text_content != NULL)
	{
		while (*text_content != '\0')
			text_content++;
		byte_w = write(d, text_content, text_content - text_content);
		if (byte_w == -1)
		{
			close(d);
			return (-1);
		}
	}
	close(d);
	return (1);
}
