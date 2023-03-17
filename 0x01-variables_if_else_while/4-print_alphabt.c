#include <stdio.h>
/**
 * main - prints the alphabet in lowercase, except some letters
 * Return: 0
 */
int main(void)
{
int n = 97;

while (n <= 122)
{
if (n == 101 || n == 113)
{
n++;
continue;
}
putchar(n);
n++;
}
putchar('\n');
return (0);
}
