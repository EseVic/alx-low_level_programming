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
	ssize_t file_des, r, w;
	char *buff;

	file_des = r = w = 0;
	if (filename == NULL)
		return (0);

	buff = malloc(sizeof(*buff) * (letters + 1));
	if (filename == NULL || buff == NULL)
	{
		free(buff);
		return (0);
	}

/**
* file_dev -  is the open(filename, O_RDONLY);
* @r: read(o, buff, letters);
* @w: write(STDOUT_FILENO, buff, r);
*/

	file_des = open(filename, O_RDONLY);
	if (file_des == -1)
		return (0);
	r = read(file_des, buff, letters);
	if (r == -1)
		return (0);
	buff[r] = '\0';
	w = write(STDOUT_FILENO, buff, r);
	if (w != r)
		return (0);
	free(buff);
	close(file_des);
	return (n_read);
}

