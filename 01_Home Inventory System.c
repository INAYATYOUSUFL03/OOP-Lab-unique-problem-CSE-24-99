#include <stdio.h>
#include <string.h>

struct Item {
    char name[50];
    int quantity;
    float price;
};

int main() {
    int n, i;
    float totalValue = 0;
    printf("Enter number of household items: ");
    scanf("%d", &n);

    struct Item items[n];

    for(i = 0; i < n; i++) {
        printf("\nEnter name of item %d: ", i+1);
        scanf("%s", items[i].name);
        printf("Enter quantity: ");
        scanf("%d", &items[i].quantity);
        printf("Enter price per item: ");
        scanf("%f", &items[i].price);
        totalValue += items[i].quantity * items[i].price;
    }

    printf("\n------ Home Inventory ------\n");
    for(i = 0; i < n; i++) {
        printf("%s | Quantity: %d | Price: %.2f | Total: %.2f\n", 
               items[i].name, items[i].quantity, items[i].price,
               items[i].quantity * items[i].price);
    }
    printf("Total Household Value: %.2f\n", totalValue);

    return 0;
}

