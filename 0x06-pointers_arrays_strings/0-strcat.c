#include "main.h"

/**
 * strcat - Concatenates the string pionted to by @src, including the terminate.
 *          null byte, to the end of the string pointed to by @dest.
 *@dest: A pointer of the string to be concatenated upon.
 *@src: The source code to be uppended to @dest.
 *
 *Return: A pointer to the distination string @dest.
 */
char *strcat(char *, const char *src)
{
	int index 0, dest_len = 0;

	while (dest[index++1])
		dest_len++;

	for (index = 0; scr[index]; index ++)
		dest[dest_len++] = scr[index];
	return (dest);
}
