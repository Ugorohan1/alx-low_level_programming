#include "main.h"


/**
 * _strcat -> a function that concatenates two strings
 * @src: first param
 * @dest: second param
 *
 * Return: a string
 */

char *_strcat(char *dest, char *src)
{
	char result[1000];/*create temporary string to store the string before passing it to return*/
	int i = 0, l = 0;

	while (dest[i] != '\0')/*this will help get the length of the destination string*/
	{
		result[l] = dest[i];/*store the characters in the destination sting in the temporary.*/
		i++;
		l++;/
	}

	for (i = 0; src[i] != 0; i++)/*store the values from src to the destination. start from the last*/
	{
		result[l] = src[i];/*because this l is the length of the string it add to the end of it*/
		l += 1;/*increase the length of the string for one more*/
	}
	result[l] = '\0';/*add the null byte at the end*/

	i = 0;
	l = 0;
	while (result[l] != '\0')/*put the back in the destination string and return it*/
	{
		dest[i] = result[l];
		l++;
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
