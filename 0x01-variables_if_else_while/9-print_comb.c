#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
* main - Entry point
*
* Return: Always 0
*/

int main(void)
{
	int a, b, c, d, e, f, g, h, i, j;

	for (a = '0' ; a <= '9' ; a++)
	{
		for (b = '1' ; b <= '9' ; b++)
		{
			for (c = '2' ; c <= '9' ; c++)
			{
				for (d = '3' ; d <= '9' ; d++)
				{
					for (e = '4' ; e <= '9' ; e++)
					{
						for (f = '5' ; f <= '9' ; f++)
						{
							for (g = '6' ; g <= '9' ; g++)
							{
								for (h = '7' ; h <= '9' ; h++)
								{
									for (i = '8' ; i <= '9' ; i++)
									{
										for (j = '9' ; j <= '9' ; j++)
										{
											putchar("%d %d %d %d %d %d %d %d %d %d\n", a, b,											c, d, e, f, g, h, i, j);
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}
	putchar ('\n');

	return (0);
}
