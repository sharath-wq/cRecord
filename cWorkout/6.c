#include <stdio.h>

int main()

{
    int matrix[10][10];
    int row, col, i, j;
    printf("Enter the number of rows: ");
    scanf("%d", &row);
    printf("Enter the number of columns: ");
    scanf("%d", &col);

    printf("Enter the elements of matrix: \n");
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("The entered matrix is: \n");
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            printf("%d, ", matrix[i][j]);
        }
        printf("\n");
    }

    printf("Transpose of the entered matrix is: \n");
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            printf("%d, ", matrix[j][i]);
        }
        printf("\n");
    }

    return 0;
}