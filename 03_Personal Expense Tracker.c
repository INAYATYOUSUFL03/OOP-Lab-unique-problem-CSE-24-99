#include <stdio.h>
#include <string.h>

struct Expense {
    char category[30];
    float amount;
};

int main() {
    int n, i;
    float total = 0;
    printf("Enter number of expenses: ");
    scanf("%d", &n);

    struct Expense expenses[n];

    for(i = 0; i < n; i++) {
        printf("\nEnter category of expense %d: ", i+1);
        scanf("%s", expenses[i].category);
        printf("Enter amount: ");
        scanf("%f", &expenses[i].amount);
        total += expenses[i].amount;
    }

    printf("\n------ Expense Report ------\n");
    for(i = 0; i < n; i++) {
        printf("%s: %.2f\n", expenses[i].category, expenses[i].amount);
    }
    printf("Total Spent: %.2f\n", total);

    return 0;
}

