#include <stdio.h>

int main()
{
    int size, i, num;
    FILE *fp1, *fp2;
    printf("Enter the size: ");
    scanf("%d", &size);
    printf("Enter %d numbers: ", size);

    fp1 = fopen("even.txt", "w");
    fp2 = fopen("odd.txt", "w");

    for (i = 0; i < size; i++)
    {
        scanf("%d", &num);
        if (num % 2 == 0)
        {
            fprintf(fp1, "\t%d", num);
        }
        else
        {
            fprintf(fp2, "\t%d", num);
        }
    }
    fclose(fp1);
    fclose(fp2);

    printf("\nContents of 'even.txt': ");
    fp1 = fopen("even.txt", "r");
    while (!feof(fp1))
    {
        fscanf(fp1, "%d", &num);
        printf("\n%d", num);
    }

    printf("\nContents of 'odd.txt': ");
    fp2 = fopen("odd.txt", "r");
    while (!feof(fp2))
    {
        fscanf(fp2, "%d", &num);
        printf("\n%d", num);
    }
    fclose(fp1);
    fclose(fp2);
    return 0;
}