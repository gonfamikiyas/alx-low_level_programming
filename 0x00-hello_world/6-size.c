#include<stdio.h>
/**
 * main - Entry point
 *
 * Discription: this code prints the size of different data types in C
 *
 * Return - Always 0 (Success)
 */
int main(void)
{
	char c;
	int i;
	long int l;
	long long int L;
	float f;

	printf("Size of a char: %lu byte(s)\n", sizeof(c));
	printf("Size of an int: %lu byte(s)\n", sizeof(i));
	printf("Size of an long int %lu byte(s)\n", sizeof(l));
	printf("Size of an long long int: %lu byte(s)\n", sizeof(L));
	printf("Size of a float: %lu byte(s)\n", sizeof(f));
	return (0);
}
