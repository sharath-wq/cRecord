#include <stdio.h>
#include <math.h>
int main()
{
    int n;
    printf("Enter the number of terms : ");
    scanf("%d", &n);
    float result = 0;
    for (float i = 1; i <= n; i++)
        result += pow((1 / i), i);
    printf("Sum of the numbers in series upto %d is %.5f", n, result);
    getch();
    return 0;
}