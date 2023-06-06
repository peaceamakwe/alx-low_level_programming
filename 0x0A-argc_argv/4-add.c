#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * check_num - check
 * @str: array str
 * Return: Always 0
 */

int check_num(char *str)
{
	unsigned int con;

	con = 0;
	while (con < strlen(str))

	{
		if (!isdigit(str[con]))
		{
			return (0);
		}
		con++;
	}
	return (1);
}

/**
 * main - Print the name of the program
 * @argc: Count arguments
 * @argv: Arguments
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int con;
	int str_to_int;
	int sum = 0;

	con = 1;

	while (con < argc)
	{
		if (check_num(argv[con]))
		{
			str_to_int = atoi(argv[con]);
			sum += str_to_int;
		}
		else
		{
			printf("Error\n");
			return (1);
		}
		con++;
	}
	printf("%d\n", sum);

	return (0);
}
