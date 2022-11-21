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
	int ch;

	while (*str != '\0')
	{
		ch = *str;
		if (ch >= 127 || (ch > 0 && ch < 32))
		{
			_putchar('\\');
			_putchar('x');
			len += 2;
		}
		else
		{
			_putchar(*str + 0);
		}
		len += 1;
		++str;
	}
	return (len);
}
