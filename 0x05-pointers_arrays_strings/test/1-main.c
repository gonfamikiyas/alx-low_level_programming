#include <stdio.h>

/**
 * main - address of vriables
 *
 * Return: Always 0.
 * 
 */
int main(void)
{
	char c;
	int n;

	printf("Adress of variables 'c': %p\n", &c);
	printf("Address of variable 'n': %p\n", &n);
	return(0);
}
