#include <stdio.h>
/**
 * _isupper - Check if a character is in uppercase.
 * @c: character value to be checked
 *
 * Return: 1 for uppercase and 0 for lower case.
 */
int _isupper(int c)
{
	int res;

	if (c >= 65 && c <= 90)
		res = 1;
	else
		res = 0;

	return (res);
}
