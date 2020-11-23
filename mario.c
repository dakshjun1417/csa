#include<stdio.h>
#include<cs50.h>

int main(void)
{
    int a;
    do
    {
        a = get_int("number? ");
    }
    while (a < 1 || a>8);

    for (int i = 1; i < a+1; i++)
    {
        for (int u = a - i; u > 0; u--)
        {
            printf(" ");
        }
        for (int j = 0; j < i; j++)
        {
            printf("#");
        }

        printf("\n");

    }
}

