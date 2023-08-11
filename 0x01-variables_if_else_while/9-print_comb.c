#include <stdio.h>
/**
 *main - Entry point
 *
 *Return: Always 0 (Success)
 */
int main(void)
{
int num;
for (num = 0; num <= 9; num++)
{
if (num <= 9 && num > 0)
{
putchar(',');
putchar(' ');
}
putchar((num % 10) + '0');
}
putchar('\n');
return (0);
}
