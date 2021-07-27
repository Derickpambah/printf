#include "holberton.h"
/**
 * _printf - a function that works same as printf of the standard library
 * @format: first parameter
 * Return: an int, which is the number of charcters printed
 */
int _printf(const char *format, ...)
{
	/*insert something here*/
	char *traverse;
	unsigned int i;
	char *s;

	/*we start here*/
	va_list arg;

	va_start(arg, format);
	for (traverse = format; *traverse != '\0'; traverse++)
	{
		while (*traverse != '%')
		{
			_putchar(*traverse);
			traverse++;
		}
		traverse++;
		/*this is step 2*/
		if (*traverse == 'c')
		{
			i = va_arg(arg, int);
			_putchar(i);
			break;
		}
		else if (*traverse == 's')
		{
			s = va_arg(arg, char *);
			_puts(s);
			break;
		}
	}
	va_end(arg);
	return (0);
}
