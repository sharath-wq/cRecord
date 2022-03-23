#include <stdio.h>

int main()

{
    int amount, note2000, note500, note200, note100, note50, note20, note10, note5, note2, note1;
    note2000 = note500 = note200 = note100 = note50 = note20 = note10 = note5 = note2 = note1 = 0;

    printf("Enter the amount: ");
    scanf("%d", &amount);

    if (amount >= 2000)
    {
        note2000 = amount / 2000;
        amount -= note2000 * 2000;
    }
    if (amount >= 500)
    {
        note500 = amount / 500;
        amount -= note500 * 500;
    }
    if (amount >= 200)
    {
        note200 = amount / 200;
        amount -= note200 * 200;
    }
    if (amount >= 100)
    {
        note100 = amount / 100;
        amount -= note100 * 100;
    }
    if (amount >= 50)
    {
        note50 = amount / 50;
        amount -= note50 * 50;
    }
    if (amount >= 20)
    {
        note20 = amount / 20;
        amount -= note20 * 20;
    }
    if (amount >= 10)
    {
        note10 = amount / 10;
        amount -= note10 * 10;
    }
    if (amount >= 5)
    {
        note5 = amount / 5;
        amount -= note5 * 5;
    }
    if (amount >= 2)
    {
        note2 = amount / 2;
        amount -= note2 * 2;
    }
    if (amount >= 1)
    {
        note1 = amount / 1;
        amount -= note1 * 1;
    }

    printf("Total number of notes: ");

    printf("2000 * %d = %d\n", note2000, note2000 * 2000);
    printf("500 * %d = %d\n", note500, note500 * 500);
    printf("200 * %d = %d\n", note200, note200 * 200);
    printf("100 * %d = %d\n", note100, note100 * 100);
    printf("50 * %d = %d\n", note50, note50 * 50);
    printf("20 * %d = %d\n", note20, note20 * 20);
    printf("10 * %d = %d\n", note10, note10 * 10);
    printf("5 * %d = %d\n", note5, note5 * 5);
    printf("2 * %d = %d\n", note2, note2 * 2);
    printf("1 * %d = %d\n", note1, note1 * 1);

    return 0;
}