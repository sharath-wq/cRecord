#include <stdio.h>

int main()
{
    int year;
    printf("Enter a year in 4 digits: ");
    scanf("%d", &year);

    if ((year % 100 == 0 && year % 400 == 0) || (year % 4 == 0))
    {
        printf("%d is a leap year");
    }
    else
    {
        printf("%d is not a leap year");
    }
    return 0;
}