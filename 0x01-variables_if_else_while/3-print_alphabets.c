#include <stdio.h>
/**
 * main - prints the alphabet in lowercase, and then in uppercase
 * Return: 0
 */
int main(void)
{
int n = 97;
int k = 65;

while (n <= 122)
{
putchar(n);
n++;
}
while (k <= 90)
{
putchar(k);
k++;
}
putchar('\n');
return (0);
}
