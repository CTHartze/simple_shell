#include "shell.h"

/**
 * _strlen - Renders string length.
 * @s: points to string whose length to check
 * Return: string integer length
 */
int _strlen(char *s)
{
	int i = 0;

	if (!s)
		return (0);

	while (*s++)
		i++;
	return (i);
}

/**
 * _strcmp - Executes lexicographic comparison of strings.
 * @s1: first string pointer
 * @s2: second string pointer
 * Return: negative when s1 < s2, positive when s1 > s2,
 * zero if s1 == s2
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2)
	{
		if (*s1 != *s2)
			return (*s1 - *s2);
		s1++;
		s2++;
	}
	if (*s1 == *s2)
		return (0);
	else
		return (*s1 < *s2 ? -1 : 1);
}

/**
 * starts_with - Tests if needle starts with haystack.
 * @haystack: points to string to search
 * @needle: points to substring to find
 * Return: address of next char of haystack else NULL
 */
char *starts_with(const char *haystack, const char *needle)
{
	while (*needle)
		if (*needle++ != *haystack++)
			return (NULL);
	return ((char *)haystack);
}

/**
 * _strcat - Integrates two strings.
 * @dest: destination buffer pointer
 * @src: source buffer pointer
 * Return: pointer to the destination buffer
 */
char *_strcat(char *dest, char *src)
{
	char *ret = dest;

	while (*dest)
		dest++;
	while (*src)
		*dest++ = *src++;
	*dest = *src;
	return (ret);
}
