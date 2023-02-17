#include "shell.h"

/**
 **_strncpy - copies a string
 *@dest: .....
 *@src:.......
 *@n: ...
 *Return: the concatenated string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int l, j;
	char *s = dest;

	l = 0;
	while (src[l] != '\0' && l < n - 1)
	{
		dest[l] = src[l];
		l++;
	}
	if (l < n)
	{
		j = l;
		while (j < n)
		{
			dest[j] = '\0';
			j++;
		}
	}
	return (s);
}

/**
 **_strncat - concatenates two strings
 *@dest: the first string
 *@src: the second string
 *@n: the amount of bytes to be maximally used
 *Return: the concatenated string
 */
char *_strncat(char *dest, char *src, int n)
{
	int l, j;
	char *s = dest;

	l = 0;
	j = 0;
	while (dest[l] != '\0')
		l++;
	while (src[j] != '\0' && j < n)
	{
		dest[l] = src[j];
		l++;
		j++;
	}
	if (j < n)
		dest[l] = '\0';
	return (s);
}

/**
 **_strchr - .......
 *@s: ........
 *@c: ...
 *Return: ...
 */
char *_strchr(char *s, char c)
{
	do {
		if (*s == c)
			return (s);
	} while (*s++ != '\0');

	return (NULL);
}
