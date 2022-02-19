#include <stdio.h>

int main()
{
    int num;
    int d, rev = 0, sum = 0;
    printf("Enter the number : ");
    scanf("%d", &num);
    while (num > 0)
    {
        d = num % 10;
        num /= 10;
        sum += d;
        rev = (rev * 10) + d;
    }
    printf("Reverse of number is %d\nSum of digits is %d", rev, sum);
    getch();
    return 0;
}