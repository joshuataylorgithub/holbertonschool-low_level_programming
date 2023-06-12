#include "main.h"
/**
 * string_toupper - converts string from lower-case to upper-case
 *
 * @str: string to be converted
 *
 *
 * Return: (pointer to the modified string)
 **/

char *string_toupper(char *str)
{
	int i;

	while (str[i] != '\n')
{
	if (str[i] >= 'a' && str[i] <= 'z')
{
	str[i] = str[i] - ('a' - 'A');
}
	i++;
}
	return (str);

}
