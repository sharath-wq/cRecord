#include <stdio.h>
#include <math.h>

int main()
{
    int num;
    float result, i;
    printf("Enter a number: ");
    scanf("%d", &num);

    for (i = 1; i <= num; i++)
    {
        result += pow((1 / i), i);
    }
    printf("Sum of the numbers in series upto %d is %.5f", num, result);
    return 0;
}