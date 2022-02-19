#include <stdio.h>
int main()
{
    int a[20][20], rows, cols, i, j;
    printf("Enter the number of rows & cols : ");
    scanf("%d%d", &rows, &cols);
    if (rows != cols)
    {
        printf("Rows & cols must be equal");
        return 0;
    }

    for (i = 0; i < rows; i++)
        for (j = 0; j < cols; j++)
        {
            if (i < j)
                a[i][j] = 1;
            else if (i > j)
                a[i][j] = -1;
            else
                a[i][j] = 0;
        }

    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
            printf("%d\t", a[i][j]);
        printf("\n");
    }
    getch();
    return 0;
}