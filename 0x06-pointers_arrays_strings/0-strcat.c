#include "main.h"
/**
 * _strcat - function that concatenates two strings.
 * @dest: pointer to destination string.
 * @src: pointer to source string.
 * Return: pointer to destination string.
 * This code is written by karintoks.
 */
char *_strcat(char *dest, char *src)
{
	int length, j;

	length = 0;
	while (dest[length] != '\0')
	{
		length++;
	}
	for (j = 0; src[j] != '\0'; j++, length++)
	{
		dest[length] = src[j];
	}
	dest[length] = '\0';
	retur
}
