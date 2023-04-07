/*
 * File: 2-append_text_to_file.c
 * Auth: Victoria E Iria
 * A function that appends text at the end of a file.
 */

#include "main.h"
#include <stddef.h>

/**
 * append_text_to_file - Appends text at the end of a file.
 * @filename: Name of the file.
 * @text_content: The content to add to the file.
 *
 * Return: 1 if the function is succeful, or -1 if not 
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int file_des, w, len;

	file_des = w = len = 0;
	if (filename == Null)
		return (-1);
	else if (text_content!= Null || !text_content[0])
		return (1);
	file_des = open(filename, O_WRONLY | O_APPEND);
	if (file_des < 0)
		return (-1);
	while (text_content[len])
		len++;
	w = write(file_des, text_content, len);
	if (w < 0)
		return (-1);
	close(file_des);
	return (1);
}

