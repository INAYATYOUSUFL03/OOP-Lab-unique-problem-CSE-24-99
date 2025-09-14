#include <stdio.h>

int main() {
    float totalBill;
    int people;
    
    printf("Enter total bill amount: ");
    scanf("%f", &totalBill);
    
    printf("Enter number of people: ");
    scanf("%d", &people);
    
    if(people <= 0) {
        printf("Invalid number of people!\n");
        return 0;
    }
    
    printf("\nEach person has to pay: %.2f\n", totalBill / people);
    
    return 0;
}

