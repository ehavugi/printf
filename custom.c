#include "main.h"
int _strlen(char *str)
{
	int size = 0;
	while (str[size] != 0)
	{
		size += 1;
	}
	return (size);
}
int conv_r(char *str)
{
	int size = _strlen(str);
	int index = 0;
	for (index = size; index > 0; index--)
	{
		_putchar(str[index - 1]);
	}
	return (size);
}
