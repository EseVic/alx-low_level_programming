/*
 * File: 1-create_file.c
 * Auth: Victoria E Iria
 * A function that creates a file.
 */

#include "main.h"
#include <stddef.h>

/**
 * create_file - function that will create a new file and fill with with some
 * content.
 * @filename: name of the file to create.
 * @text_content: text to add to the new file.
 *
 * Return: Always 1 on scucess, -1 on Failure
 */

int create_file(const char *filename, char *text_content)
{
	int o, w, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	o = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	w = write(o, text_content, len);

	if (o == -1 || w == -1)
		return (-1);

	close(o);

	return (1);
}
