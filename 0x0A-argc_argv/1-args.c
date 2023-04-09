#include <stdio.h>

/**
 * main - Entry point of the program
 * @argc: Number of arguments passed
 * @argv: Array of pointers to strings representing the arguments
 *
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	int num_args = argc - 1; /* Subtracting 1 to exclude the program name */

	printf("%d\n", num_args);

	return 0;
}

