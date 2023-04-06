#include "main.h"

int find_length(char *s);
int check_palindrome(char *s, int begin, int end);

/**
 * find_length - Entry point
 * Description: Get the legth
 * @s: Character
 * Return: 1 if palindrome 0 otherwise
 */

int find_length(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return (1 + find_length(s + 1));
}

/**
 * check_palindrome - Entry point of function
 * Description: Checking Palindrome
 * @s: Character
 * @begin: Integer
 * @end: Integer
 * Return: 1 if palindrome 0 otherwise
 */

int check_palindrome(char *s, int begin, int end)
{
	if (begin >= end)
	{
		return (1);
	}
	if (*(s + begin) == *(s + end))
	{
		return (check_palindrome(s, begin + 1, end - 1));
	}
	return (0);
}

/**
 * is_palindrome - Entry point
 * Description: Palindrome
 * @s: Character
 * Return: 1 if palindrome 0 otherwise
 */

int is_palindrome(char *s)
{
	int len = find_length(s);

	if (len == 0 || len == 1)
	{
		return (1);
	}
	return (check_palindrome(s, 0, len - 1));
}
