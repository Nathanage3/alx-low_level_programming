#include <stdio.h>
/**
 * main - main function
 * Return: Always 0 for success
 */
int main(void)
{
    int n1 = 1, n2 = 2, n3, i;

     for (i = 3; i <= 50; i++)
     {
        n3 = n1 + n2;
        printf("%d", n3);
        n1 = n2;
        n2 = n3;
     }
     return (0);
}
