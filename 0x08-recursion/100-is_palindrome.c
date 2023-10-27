#include "main.h"

/**
 * is_palindrome - the function
 *
 * Description: check if a string is palindrome
 * @s: input string to be checked
 *
 * Return: 1 if true and 0 if not
 */

int is_palindrome(char *s)
{
	if (*s == '\0')
	{
		return (1);
	}
	else if (*s == r(s))
	{
		return (f(s + 1) == r(s + 1));
	}
	else
	{
		return (0);
	}
}

/**
 * r - the function
 *
 * Description: reverse the string
 * @s: the string
 *
 * Return: reverse string
 */

int r(char *s)
{
	if (*s == '\0')
	{
		return (s);
	}
	else
	{

