#include "main.h"


int bandersnatch(char *s1, char *s2);
char *move(char *s2);

/**
 * wildcmp - compares two strings recursively,
 * checking for wildcards expansion
 * @s1: first string to compare
 * @s2: second string to compare
 *
 * Return: 1 if the strings can be considered identical
 * othwewise
 */

int wildcmp(char *s1, char *s2)
{
	/**
	 * this is going to be a sum of return values
	 */
	int sum = 0;

	/**
	 * if we reach the end of s1 and the char in s2 is a
	 * and if the next chars of s2 are *, return 1
	 */
	if (*s1 == '\0' && *s2 == '*' && !*move(s2))
		return (1);


	/**
	 * if the chars are equal in both strings,
	 * if we reached the end of s1, return 1
	 * else increment s1 and s2 by 1
	 */
	if (*s1 == *s2)
	{	

		if (*s1 == '\0')
			return (1);
		return (wildcmp(s1 + 1, s2 + s2 + 1));
	}
	/**
	 * if we reached the end of both strings
	 * return
 
