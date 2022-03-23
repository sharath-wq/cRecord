#include <stdio.h>

int main()
{
    int choice;
    float amount, rupee, dollar, pound, euro;
    printf("Following are the choices: ");
    printf("\nEnter 1 : Rupees: ");
    printf("\nEnter 2 : Dollar: ");
    printf("\nEnter 3 : Pound: ");
    printf("\nEnter 4 : Euro: ");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    printf("Enter the amount you want to convert: ");
    scanf("%f", &amount);

    switch (choice)
    {
    case 1:
        dollar = amount / 70;
        printf("%.2f rupees = %.2f dollars\n", amount, dollar);
        pound = amount / 88;
        printf("%.2f rupees = %.2f pound\n", amount, pound);
        euro = amount / 80;
        printf("%.2f rupees = %.2f euro\n", amount, euro);
        break;

    case 2:
        rupee = amount * 70;
        printf("%.2f dollar = %.2f rupees\n", amount, rupee);
        pound = amount * 0.78;
        printf("%.2f dollar = %.2f pound\n", amount, pound);
        euro = amount * 0.87;
        printf("%.2f dollar = %.2f euro\n", amount, euro);
        break;

    case 3:
        rupee = amount * 88;
        printf("%.2f pound = %.2f rupees\n", amount, rupee);
        dollar = amount * 1.6;
        printf("%.2f pound = %.2f dollar\n", amount, dollar);
        euro = amount * 1.10;
        printf("%.2f pound = %.2f euro\n", amount, euro);
        break;

    case 4:
        rupee = amount * 80;
        printf("%.2f euro = %.2f rupees\n", amount, rupee);
        dollar = amount * 1.14;
        printf("%.2f euro = %.2f dollar\n", amount, dollar);
        pound = amount * 0.90;
        printf("%.2f euro = %.2f euro\n", amount, pound);
        break;

    default:
        printf("INVALID INPUT!");
        break;
    }
    return 0;
}