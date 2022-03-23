#include <stdio.h>

int main()
{
    int row, col, i, j;
    int a[10][10];
    printf("Enter rows and columns: ");
    scanf("%d%d", &row, &col);

    if (row != col)
    {
        printf("Row and columns must be equal!");
        return 0;
    }

    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            if (i < j)
            {
                a[i][j] = 1;
            }
            else if (i > j)
            {
                a[i][j] = -1;
            }
            else
            {
                a[i][j] = 0;
            }
        }
    }

    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }
    return 0;
}