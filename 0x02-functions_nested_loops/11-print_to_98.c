#include "main.h"
/**
 * print_to_98 - print integers fro zero to 98
 * @n: the parameter to be tested
 * Return: Always 0 for success
 */
void print_to_98(int n)
{
    if (n <= 98)
    {
        for (; n <= 98; n++)
        {
            printf("%d", n);
            if (n != 98)
                printf(", ");
        }
    }
    else
    {
        for (; n >= 98; n--)
        {
            printf("%d", n);
            if (n != 98)
                printf(", ");
        }
    }
    printf("\n");
}
