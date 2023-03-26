#include <stdio.h>
/**
 * main - printing the size, in bytes, of a pointer
 *
 * Return: Always
 */
int main(void)
{
	int n;
	int *p;

	n = 90;
	p = &n;
	printf("memory address of variable 'n': %d\n", n);
	*p = 23;
	printf("memory address of variable 'n': %d\n", n);

	return(0);
}
