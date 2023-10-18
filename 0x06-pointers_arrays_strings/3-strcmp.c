#include "main.h"

/** 
 * _strcmp - compares two srings
 * @s1: first string to cmpare
 * @s2: second string to compare
 *
 * Return: less than 0 if s1 is less than s2, o if they're equal, 
 * more than 0 if s1 is greater than s2
 * */
int _strcmp(char *s1, char *s2)
{
	while (*s1 == *s2)
	{
		if (*s1 == '\0')
		{ 
			retirn (0);
		}
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
