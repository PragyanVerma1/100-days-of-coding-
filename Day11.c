//Write a program to display the month name and number of days using switch-case for a given month number
/*#include <stdio.h>
int main() {
    int month;
    printf("Enter the month number (1-12): ");
    scanf("%d", &month);
    switch(month) {
        case 1:
            printf("January has 31 days.\n");
            break;
        case 2:
            printf("February has 28 or 29 days.\n");
            break;
        case 3:
            printf("March has 31 days.\n");
            break;
        case 4:
            printf("April has 30 days.\n");
            break;
        case 5:
            printf("May has 31 days.\n");
            break;
        case 6:
            printf("June has 30 days.\n");
            break;
        case 7:
            printf("July has 31 days.\n");
            break;
        case 8:
            printf("August has 31 days.\n");
            break;
        case 9:
            printf("September has 30 days.\n");
            break;
        case 10:
            printf("October has 31 days.\n");
            break;
        case 11:
            printf("November has 30 days.\n");
            break;
        case 12:
            printf("December has 31 days.\n");
            break;
        default:
            printf("Invalid month number! Please enter a number between 1 and 12.\n");
            break;
    }
    return 0;
}*/




//Write a program to find profit or loss percentage given cost price and selling price.
#include <stdio.h>

int main() {
    float costPrice, sellingPrice, profitOrLoss, percentage;

    printf("Enter the cost price: ");
    scanf("%f", &costPrice);
    printf("Enter the selling price: ");
    scanf("%f", &sellingPrice);

    if (sellingPrice > costPrice) {
        profitOrLoss = sellingPrice - costPrice;
        percentage = (profitOrLoss / costPrice) * 100;
        printf("Profit of %.2f with percentage %.2f%%\n", profitOrLoss, percentage);
    } else if (costPrice > sellingPrice) {
        profitOrLoss = costPrice - sellingPrice;
        percentage = (profitOrLoss / costPrice) * 100;
        printf("Loss of %.2f with percentage %.2f%%\n", profitOrLoss, percentage);
    } else {
        printf("No profit, no loss.\n");
    }

    return 0;
}

