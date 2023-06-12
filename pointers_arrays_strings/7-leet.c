#include "main.h"
/**
 * leet - encodes a string into 1337
 *
 * @str: string to encode
 *
 * Return: (pointer to encoded string)
 **/

char *leet(char *str)
{
	int i, j;

	char leet_letters[] = "aAeEoOtTlL";
	char leet_numbers[] = "43071";

	for (i = 0; str[i] != '\0'; i++)
{
	for (j = 0; leet_letters[j] != '\0'; j++)
{
	if (str[i] == leet_letters[j])
{
	str[i] = leet_numbers[j / 2];
	break;
}
}
}
	return (str);
}
