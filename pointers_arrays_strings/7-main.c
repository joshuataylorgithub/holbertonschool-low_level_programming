#include "main.h"
/**
 * main - checks the code
 *
 *
 *
 * Return (0)
 **/

int main(void)
{
	char s[] = "Expect the best. Prepare for the worst. Capitalize on what comes.\n";
	char *p;

	p = leet(s);
	printf("%s", p);
	printf("%s", s);
	return (0);
}
