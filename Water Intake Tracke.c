#include <stdio.h>
int main() {
    int glasses, goal;
    
    printf("Enter your daily water intake goal (in glasses): ");
    scanf("%d", &goal);
    
    printf("Enter number of glasses you drank today: ");
    scanf("%d", &glasses);
    
    if(glasses >= goal)
        printf("Great! You met your goal ?\n");
    else
        printf("You are %d glasses short. Keep drinking water! ??\n", goal - glasses);
    
    return 0;
}

