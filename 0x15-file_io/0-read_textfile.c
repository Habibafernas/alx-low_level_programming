#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - Reads a text file and prints it to POSIX stdout.
 * @filename: A pointer to the name of the file.
 * @letters: The number of letters the
 *           function should read and print.
 *
 * Return: If the function fails or filename is NULL - 0.
 *         O/w - the actual number of bytes the function can read and print.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *b;
	ssize_t p, r, w;

	if (!filename || !letters)
	{
		return (0);
	}
	b = malloc(sizeof(char) * letters);

	if (b == NULL)
		return (0);
	p = open(filename, O_RDONLY);
	r = read(p, b, letters);
	w = write(STDOUT_FILENO, b, r);
	if (o == -1 || r == -1 || w == -1 || w != r)
	{
		free(b);
		return (0);
	}
	free(b);
	close(p);

	return (w);
}
