#include <stdio.h>

int main() {
    int baseServings, newServings;
    float rice, water;
    baseServings = 2;
    rice = 1.0;
    water = 2.0;
    
    printf("Enter number of servings you want: ");
    scanf("%d", &newServings);
    
    float factor = (float)newServings / baseServings;
    
    printf("\nFor %d servings:\n", newServings);
    printf("Rice: %.2f cups\n", rice * factor);
    printf("Water: %.2f cups\n", water * factor);
    
    return 0;
}

