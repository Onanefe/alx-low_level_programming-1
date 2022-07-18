#include "main.h"

/**
 * _strchr - locates character in string
 * @s: pointer to string
 * @c: character to locate
 *
 * Return: pointer to first occurenceof c in s
 */
char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s == c)
			return (s);
		s++;
	}
	return (!c ? s : NULL);
}
