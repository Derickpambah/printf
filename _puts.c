#include <unistd.h>
/**
 * _puts - a function that prints an output
 * @s: first parameter
 * Return: an int
 */
int _puts(char *s)
{
	int i, a;

	for (i = 0; *(s + i) != '\0'; i++)
	{}
	a = i;
	write(1, s, a);
	return (0);
}
