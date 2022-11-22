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

int conv_R(char *str)
{
	int index = 0;
	int size = _strlen(str);

	for (index = 0; index < size; index++)
	{
		if(str[index] <= 'z' && str[index] >= 'a')
		{
			_putchar(((str[index]-'a')+13)%26+'a');
		}
		else if (str[index] <= 'Z' && str[index] >= 'A')
		{
			_putchar(((str[index])-'A'+13)%26+'A');
		}
		else
		{
			_putchar(str[index]);
		}
	}
	return(size);
}

