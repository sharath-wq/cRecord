#include <stdio.h>
#include <stdlib.h>

int cmpfunc(const void *a, const void *b)
{
    return (*(int *)a - *(int *)b);
}

int main()
{
    int a[20], b[20], aSize, bSize, res[40];
    int i = 0, j = 0, k = 0;

    printf("\nEnter the number of elements in first array: ");
    scanf("%d", &aSize);
    printf("Enter the numbers in first array: ");
    for (i = 0; i < aSize; i++)
        scanf("%d", &a[i]);

    printf("\nEnter the number of elements in second array: ");
    scanf("%d", &bSize);
    printf("Enter the numbers in second array: ");

    for (i = 0; i < bSize; i++)
        scanf("%d", &b[i]);

    i = 0;
    while (i < aSize)
    {
        res[k] = a[i];
        i += 1;
        k += 1;
    }
    j = 0;
    while (j < bSize)
    {
        res[k] = b[j];
        j += 1;
        k += 1;
    }

    qsort(res, aSize + bSize, sizeof(int), cmpfunc);

    printf("\nSorted merged list :");
    for (i = 0; i < aSize + bSize; i++)
    {
        printf(" %d", res[i]);
    }

    getch();
    return 0;
}