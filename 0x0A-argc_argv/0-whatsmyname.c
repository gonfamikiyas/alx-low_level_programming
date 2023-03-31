#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * main - return value
 *@argc: int
 *@argv: char
 *Return - value
 */
int main(int argc, char **argv)
{
        while(argc--)
                printf("%s\n", *argv++);
        exit(EXIT_SUCCESS);
}
