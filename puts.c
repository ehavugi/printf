#include "main.h"
/**
  * _puts - prints a string
  *
  * @str: pointer to a string
  *
  * Return: length
  */

int _puts(char *str)
{
	int len = 0;

	while (*str != '\0')
	{
		_putchar(*str + 0);
		len += 1;
		++str;
	}
	return (len);
}

/**
 * _puts_S - print a string with %S format
 * @str: string
 *
 * Return: length
 */
int _puts_S(char *str)
{
	int len = 0;
	int ch;

	while (*str != '\0')
	{

		ch = *str;
		if (ch >= 127 || (ch > 0 && ch < 32))
		{
			len += _putchar('\\');
			len += _putchar('x');
			
			len += toHexBig(ch/16);
			len += toHexBig(ch%16);
		}
		else
		{
			_putchar(*str + 0);
			len += 1;
		}
		++str;
	}
	return (len);
}
