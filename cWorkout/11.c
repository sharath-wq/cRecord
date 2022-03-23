#include <stdio.h>

int main()
{
    int n1, n2, i, num, temp, rem;
    printf("Enter two number (Intervals): ");
    scanf("%d %d", &n1, &n2);
    printf("Armstrong numbers between %d and %d are: ", n1, n2);
    for (i = n1 + 1; i < n2; i++)
    {
        num = 0;
        for (temp = i; temp != 0; temp /= 10)
        {
            rem = temp % 10;
            num += rem * rem * rem;
        }
        if (i == num)
        {
            printf("%d ", i);
        }
    }
    return 0;
}