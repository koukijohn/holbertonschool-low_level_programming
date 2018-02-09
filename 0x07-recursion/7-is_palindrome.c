#include "holberton.h"

/**
 * slen - To find length of string to know where the n is.
 * @s: This is our string we are trying to find the length of.
 * Return: int
 */

int slen(char *s)
{
	if (*s == '\0') /* base case */
		return (0);
	return (slen(s + 1) + 1); /* Recursive call */
}

/**
 * palindrome - This is our helper function w/ recursion and base cases.
 * @s: This is our string we are trying to swap.
 * @start: This tells us where to start our string.
 * @end: This is where it ends.
 *
 * Return: int
 */

int palindrome(char *s, int start, int end) /* This is our helper function*/
{
	if (s[start] != s[end])
		return (0);
	if (start >= end) /*This checks if it's a palindrome*/
		return (1);
	if (s == '\0')
		return (1);
	return (palindrome(s, start + 1, end - 1));
}

/**
 * is_palindrome - Calls the helper function and tells
 * @s: This is our string.
 *
 * Return: int
 */

int is_palindrome(char *s)
{
	return (palindrome(s, 0, slen(s) - 1));
}
