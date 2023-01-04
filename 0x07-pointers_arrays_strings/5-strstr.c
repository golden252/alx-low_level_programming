#include "main.h"

/**
 * _strstr - a function that locates a substring.
 * @s1: search area
 * @s2: string to be searcht
 * Return: Always 0.
 */
char *_strstr(char *s1, char *s2)
{
	unsigned int x, size = 0;

	while (*(s2 + size) != 0)
	{
		size++;
	}


