#include <stdio.h>

int main()
{

    int num, i, j, k;
    printf("Enter a number: ");
    scanf("%d", &num);

    for (i = 0; i < num; i++)
    {
        for (k = i; k < num; k++)
        {
            printf(" ");
        }

        for (j = 0; j <= i; j++)
        {
            printf(" *");
        }
        printf("\n");
    }
    return 0;
}