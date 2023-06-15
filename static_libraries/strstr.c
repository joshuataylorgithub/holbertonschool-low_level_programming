#include "main.h"

char *_strstr(char *haystack, char *needle)

{
	if (*needle == '\0')
	{
	  return (haystack);
	}
	while (*haystack != '\0')
	{
	  char *start = haystack;
	  char *p = needle;

	  while (*p != '\0' && *haystack == *p)
	  {
	    haystack++;
	    p++;
	  }
	    if (*p == '\0')
	  {
	  return (start);
	  }
	  haystack = start + 1;
	}
	return (NULL);

}
