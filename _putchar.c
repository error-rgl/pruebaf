#include "main.h"

/**
 * _putchar - writes to character c to sdtout.
 * @c: The character to print.
 * 
 * Return: On success 1
 * on error, -1 is returned.
 */
int _putchar(char c)
{
	return(write(1, &c, 1));
}
