#include "main.h"

char *_strpbrk(char *s, char *accept)
{
	while (*s != '\0')
{
	char *p = accept;
	while (*p != '\0')
{
	if (*p == *s)
{
	return (s);
}
	p++;
}
	s++;
}
	return (NULL);
}
