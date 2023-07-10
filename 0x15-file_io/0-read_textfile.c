#include "main.h"
/**
 * read_textfile - read the text file
 * @filename: filename
 *
 * @letters: number of letters it should read and print
 * Return: number of letters
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int d;
	ssize_t byte_r, byte_w;
	char *buffer;

	if (filename == NULL)
		return (0);
	d = open(filename, O_RDONLY);
	if (d == -1)
		return (0);
	buffer = malloc(sizeof(char) * (letters + 1));
	if (buffer == NULL)
	{
		close(d);
		return (0);
	}
	byte_r = read(d, buffer, letters);
	if (byte_r == -1)
	{
		free(buffer);
		close(d);
		return (0);
	}
	byte_w = write(STDOUT_FILENO, buffer, byte_r);
	if (byte_w == -1 || byte_w != byte_r)
	{
		free(buffer);
		close(d);
		return (0);
	}
	free(buffer);
	close(d);
	return (byte_w);
}
