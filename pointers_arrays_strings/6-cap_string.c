#include "main.h"
/**
 * cap_string - capitalizes the first letter of the words in a string
 *
 * @str: string to capitalize
 *
 *
 * Return: (modified string)
 **/

char *cap_string(char *str)
{
	int i, capitalize_next;

	capitalize_next = 1;

	for (i = 0; str[i] != '\0'; i++)
{
	if (capitalize_next && islower(str[i]))
{
	str[i] = toupper(str[i]);
}
	capitalize_next = 0;

	if (str[i] == ' ' || str[i] == 't' || str[i] == '\n' ||
	    str[i] == ',' || str[i] == ';' || str[i] == '.' ||
	    str[i] == '!' || str[i] == '?' || str[i] == '"' ||
	    str[i] == '(' || str[i] == ')' || str[i] == '{' ||
	    str[i] == '}')
{
	capitalize_next = 1;
}
}
	return (str);
}
