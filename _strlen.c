#include "holberton.h"
/**
 * _strlen - returns the length of a string
 * @s: a parameter
 * Return: Integer
 */
int _strlen(char *s)
{
	int i;

	for (i = 0; *(s + i) != '\0'; i++)
	{}
	return (i);
}
