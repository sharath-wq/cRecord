#include <stdio.h>
int main()
{
    int a[10][10], b[10][10], row, col;
    printf("Enter rows and columns: ");
    scanf("%d %d", &row, &col);
    printf("\nEnter matrix elements:\n");
    for (int i = 0; i < row; ++i)
        for (int j = 0; j < col; ++j)
        {
            printf("Enter element a[%d][%d]: ", i + 1, j + 1);
            scanf("%d", &a[i][j]);
        }

    printf("\nEntered matrix: \n");
    for (int i = 0; i < row; ++i)
    {
        for (int j = 0; j < col; ++j)
            printf(" %d ", a[i][j]);
        printf("\n");
    }

    printf("\nTranspose of the matrix:\n");
    for (int i = 0; i < col; ++i)
    {
        for (int j = 0; j < row; ++j)
            printf(" %d ", a[j][i]);
        printf("\n");
    }
    getch();
    return 0;
}