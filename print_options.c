#include "main.h"
/**
 * print_string - prints a string
 **/
int print_string(va_list s)
{
	char *str;
	int i;

	str = va_arg(s, char *);
	if (str == NULL)
	{
		str = "(null)";
	}
	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	return (i);
}
/**
 *print_char - prints a char
 **/
int print_char(va_list c)
{
	char chtr = (char) va_arg(c, int);

	_putchar (chtr);

	return (1);
}

