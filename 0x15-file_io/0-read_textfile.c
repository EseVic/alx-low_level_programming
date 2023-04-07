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
	int fildes, rd, w;
	char *buff;

	buff = malloc(sizeof(*buff) * (letters + 1));
	if (filename == NULL || buff == NULL)
	{
		free(buff);
		return (0);
	}
	fildes = open(filename, O_RDONLY);
	if (fildes == -1)
		return (0);
	rd = read(fildes, buff, letters);
	if (rd == -1)
		return (0);
	buff[rd] = '\0';
	w = write(STDOUT_FILENO, buff, rd);
	if (w != rd)
		return (0);
	free(buff);
	close(fildes);
	return (rd);
}
