#include "main.h"
/**
 * puts2 - prints one char out of a string
 *
 * @str: Pointer char
 */
void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (i % 2 == 0)
			_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
