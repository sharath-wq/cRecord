#include <stdio.h>

int main()
{
    int first[10], second[10], sum[10];
    int firstSize, secondSize, sumSize;
    int i, j, temp;

    // GETTING THE FIRST ARRAY
    printf("Enter the size of the first array: ");
    scanf("%d", &firstSize);
    printf("Enter the elements of the first array: ");
    for (i = 0; i < firstSize; i++)
    {
        scanf("%d", &first[i]);
    }

    // GETTING THE SECOND ARRAY
    printf("Enter the size of the second array: ");
    scanf("%d", &secondSize);
    printf("Enter the elements of the second array: ");
    for (i = 0; i < secondSize; i++)
    {
        scanf("%d", &second[i]);
    }

    // MERGING THE ARRAYS FIRST AND SECOND
    sumSize = firstSize + secondSize;
    for (i = 0; i < firstSize; i++)
    {
        sum[i] = first[i];
    }
    for (i = 0, j = firstSize; j < sumSize, i < secondSize; i++, j++)
    {
        sum[j] = second[i];
    }

    // PRINT THE MERGED ARRAY
    printf("The array after merging: ");
    for (i = 0; i < sumSize; i++)
    {
        printf("%d, ", sum[i]);
    }

    // SORT THE MERGED ARRAY
    for (i = 0; i < sumSize; i++)
    {
        for (j = i + 1; j < sumSize; j++)
        {
            if (sum[i] > sum[j])
            {
                temp = sum[i];
                sum[i] = sum[j];
                sum[j] = temp;
            }
        }
    }

    // PRINTING THE SORTED ARRAY
    printf("The array after sorted: ");
    for (i = 0; i < sumSize; i++)
    {
        printf("%d, ", sum[i]);
    }

    return 0;
}