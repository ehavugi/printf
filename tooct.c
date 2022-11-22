#include "main.h"
/**
  * _toocta - converts int to octa
  *
  * @d: int to be converted
  *
  * Return: length
  */
int _toocta(long d)
{
	int len = 0;

	if (d / 8 == 0)
	{
		_putchar((d % 8) + '0');
		len++;
		return (len);
	}
	else
	{
		len++;
		len += _toocta(d / 8);
		_putchar((d % 8) + '0');
	}
	return (len);
}
