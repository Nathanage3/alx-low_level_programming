#include "main.h"
#include <stdlib.h>
/**
 * multiply - multiplies two positive numbers represented as strings
 * @num1: the first number
 * @num2: the second number
 * Return: the product of num1 and num2 as a string
 */
char *multiply(char *num1, char *num2)
{
	int len1 = _strlen(num1), len2 = _strlen(num2), i, j, carry, n2, sum, n1;
        char *result;

	result = malloc(len1 + len2 + 1);
	if (result == NULL)
	{exit(1); }
	for (i = 0; i < len1 + len2; i++)
	{result[i] = '0'; }
	result[i] = '\0';
	for (i = len1 - 1; i >= 0; i--)
	{if (!_isdigit(num1[i]))
		{free(result);
			exit(98); }
		carry = 0;
		n1 = num1[i] - '0';
		for (j = len2 - 1; j >= 0; j--)
		{if (!_isdigit(num2[j]))
			{free(result);
				exit(98); }
			n2 = num2[j] - '0';
			sum = (result[i + j + 1] - '0') + (n1 * n2) + carry;
			result[i + j + 1] = (sum % 10) + '0';
			carry = sum / 10; }
		if (carry)
		{result[i + j + 1] += carry; }
	}
	while (*result == '0')
	{result++; }
	return result;
}
