#include "main.h"
/**
 * main - main function
 *
 * @argc: arg count
 * @argv: arg vector
 * Return: Always 0 on success and -1 on failure
*/
int main(int argc, char *argv[])
{

	if (argc != 3)
	{
		dprintf(2, "Usage: %s cp file_from file_to\n", argv[0]);
		exit(97);
	}
	copy_text(argv[1], argv[2]);
	return (0);
}
/**
 * copy_text - copying text from fron to to
 * @from: src
 * @to: dest
*/
void copy_text(const char *from, const char *to)
{
	int fd_f, fd_t;
	ssize_t readbyte, writebyte;
	char buff[1024];

	fd_f = open(from, 0);
	if (fd_f == -1)
	{
		dprintf(2, "Error: Can't read from file %s\n", from);
		exit(98);
	}
	fd_t = open(to, O_CREAT | O_TRUNC | 1, 0664);
	if (fd_t == -1)
	{
		dprintf(2, "Error: Can't write to %s\n", to);
		exit(99);
	}
	while ((readbyte = read(fd_f, buff, 1024)) > 0)
	{
		writebyte = write(fd_t, buff, readbyte);
		if (writebyte == -1)
		{
			dprintf(2, "Error: Can't write to %s\n", to);
			exit(99);
		}
	}
	if (readbyte == -1)
	{
		dprintf(2, "Error: Can't write to %s", from);
		exit(98);
	}
	if (close(fd_f) == -1)
	{
		dprintf(2, "Error: Can't close fd %d\n", fd_f);
		exit(100);
	}
	if (close(fd_t) == -1)
	{
		dprintf(2, "Error: Can't close fd %d\n", fd_t);
		exit(100);
	}
}
