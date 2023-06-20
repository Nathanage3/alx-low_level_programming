#include "main.h"
#include <stdlib.h>
#include <unistd.h>
int _strlen(char *str);
char _isdigit(char c);
/**
 * multiply - multiply
 * @num1: num1
 * @num2: num2
 * Return: product
 */
char *multiply(char *num1, char *num2)
{
	int len1 = _strlen(num1), len2 = _strlen(num2), i, j, carry, n2, sum, n1;
        char *result;

        result = malloc(len1 + len2 + 1);
        if (result == NULL)
        {
		exit(1);
	}
        for (i = 0; i < len1 + len2; i++)
        {
		result[i] = '0';
	}
        result[i] = '\0';
        for (i = len1 - 1; i >= 0; i--)
        {
		if (!_isdigit(num1[i]))
                {
			free(result);
                        exit(98);
		}
                carry = 0;
                n1 = num1[i] - '0';
                for (j = len2 - 1; j >= 0; j--)
                {
			if (!_isdigit(num2[j]))
                        {
				free(result);
                                exit(98); 
			}
                        n2 = num2[j] - '0';
                        sum = (result[i + j + 1] - '0') + (n1 * n2) + carry;
                        result[i + j + 1] = (sum % 10) + '0';
                        carry = sum / 10; 
		}
                if (carry)
                {
			result[i + j + 1] += carry;
		}
        }
        while (*result == '0')
        {
		result++;
	}
        return result;
}

/**
 * _strlen - string length
 * @str: str pointer
 * Return: string length
 */
int _strlen(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}
/**
 * _isdigit - isdigit
 * @c: char
 * Return: c
 */
char _isdigit(char c)
{
	return (c >= '0' && c <= '9');
}
/**
 * main - entry point of the program
 * @argc: the number of command-line arguments
 * @argv: an array of command-line arguments
 * Return: 0 on success, 98 on error
 */
int main(int argc, char *argv[])
{
	char *num1, *num2, *product;
	int i;

	if (argc != 3)
	{
		write(2, "Error\n", 6);
		exit(98); }
	num1 = argv[1];
	num2 = argv[2];
	for (i = 0; num1[i]; i++)
	{
		if (!_isdigit(num1[i]))
		{
			write(2, "Error\n", 6);
			exit(98); }
	}
	for (i = 0; num2[i]; i++)
	{
		if (!_isdigit(num2[i]))
		{
			write(2, "Error\n", 6);
			exit(98); }
	}
	product = multiply(num1, num2);
	write(1, product, _strlen(product));
	write(1, "\n", 1);
	free(product);
	return (0);
}
