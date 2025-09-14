#include <stdio.h>

int main() {
    int totalDoses, taken;
    
    printf("Enter total prescribed doses for today: ");
    scanf("%d", &totalDoses);
    
    printf("Enter number of doses you have taken: ");
    scanf("%d", &taken);
    
    if(taken == totalDoses)
        printf("? All medicines taken. Good job!\n");
    else if(taken < totalDoses)
        printf("?? You missed %d doses today. Take care!\n", totalDoses - taken);
    else
        printf("? Invalid entry! You cannot take more than prescribed.\n");
    
    return 0;
}

