#include<stdio.h>

/**
 * main - Entry point
 *
 * Description: C program that returns the size of different data types
 *
 * Return: always 0
 *
 */

int main(void)
{
	printf("Size of a char: %u byte(s)\n", sizeof(char));
	printf("Size of an integer: %u byte(s)\n", sizeof(int));
	printf("Size of a long: %u byte(s)\n", sizeof(long int));
	printf("Size of a long long: %u byte(s)\n", sizeof(long long int));
	printf("Size of a float: %u byte(s)\n", sizeof(float));
	return (0);
}
