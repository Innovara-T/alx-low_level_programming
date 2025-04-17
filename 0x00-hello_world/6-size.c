#include <stdio.h>
/*
 * main - Entry point
 *
 * Return - Always success (0)
 */

int main(void)
{
    printf("Size of char: %d byte(s)\n", sizeof(char));
    printf("Size of int: %d byte(s)\n", sizeof(int));
    printf("Size of double: %d byte(s)\n", sizeof(double));
    printf("Size of long int: %d byte(s)\n", sizeof(long int));
    printf("Size of long long int: %d byte(s)", sizeof(long long int));

    return (0);
}