#include <stdio.h>
/**
* main - Print two digit numbers in ascending order with commas and spaces
*
* Return: Always 0 (Success)
*/
int main(void)
{
int i, j;
for (j = i + 1; j <= 9; j++)
{
for (j = i + 1; j <= 9; j++)
		{
			if (j > i)
			{
			putchar(i + '0');
			putchar(j + '0');
			if (i != 8)
				{
				putchar(',');
				putchar(' ');
				}
			}
		}
}
		putchar('\n');
		return (0);
}
