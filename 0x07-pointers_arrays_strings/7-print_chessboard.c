#include "main.h"
/**
 * print_chessboard - Entry point
 * @a: array
 * Return: Always 0 (Success)
 */
void print_chessboard(char (*a)[8])
{
        int i;
        int j;
        for (i = 0; i < 8; i++)
        {
                for (j = 0; j < 8; j++)
                        _putchar(a[i][j]);
                _putchar('\n');
        }
}
=============================================
8-print_diagsums.c
#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - Entry point
 * @a: input
 * @size: input
 * Return: Always 0 (Success)
 */
void print_diagsums(int *a, int size)
{
int sum1, sum2, y;
sum1 = 0;
sum2 = 0;
for (y = 0; y < size; y++)
{
sum1 = sum1 + a[y * size + y];
}
for (y = size - 1; y >= 0; y--)
{
sum2 += a[y * size + (size - y - 1)];
}
printf("%d, %d\n", sum1, sum2);
}
=============================================
100-set_string.c
#include "main.h"
/**
 * set_string - sets the value of a pointer to a char
 * @s: pointer to pointer
 * @to: pointer char
 */
void set_string(char **s, char *to)
{
*s = to;
}
