#include "main.h"
/**
  * _puts - prints a string
  *
  * @str: pointer to a string
  */

int _puts(char *str)
{
	int len = 0;
	while (*str != '\0')
	{
		_putchar(*str);
		len += 1;
		++str;
	}

	return(len);
}
