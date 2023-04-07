/*
 * File: 0-read_textfile.c
 * Auth: Victoria E Iria
 * This is a function that reads a text file and
 *       prints it to the POSIX standard output.
 */

#include "main.h"
#include <stddef.h>

/**
 * read_textfile - fuction that reads a text file
 *            and print it to the POSIX stdout
 * @filename: A pointer to the name of the file.
 * @letters: The max  number of letters to print
 * Return: number of letters read and printed
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fildes, w, rd;
	char *buffer;

	fildes = w = rd = 0;
	if (!filename || !letters)
		return (0);
	fildes = open(filename, O_RDONLY);
	if (fildes < 0)
		return (0);

	bufffer = malloc(sizeof(char) * letters + 1);
	if (!buffer)
		return (0);
	rd = read(fildes, buffer, letters);
	if (rd < 0)
	{
		free(buffer);
		return (0);
	}
	buffer[letters] = '\0';
	w = write(STDOUT_FILENO, buffer, rd);
	if (w <= 0)
	{
		free(buffer);
		return (0);
	}

	free(buffer);
	close(fildes);
	return (rd);
}

