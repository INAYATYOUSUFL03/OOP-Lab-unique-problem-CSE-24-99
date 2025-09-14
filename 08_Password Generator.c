#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int length, i;
    char password[100];
    char chars[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789!@#$%^&*";
    int n = sizeof(chars) - 1;
    
    printf("Enter password length: ");
    scanf("%d", &length);
    
    srand(time(0));
    
    for(i = 0; i < length; i++) {
        password[i] = chars[rand() % n];
    }
    password[length] = '\0';
    
    printf("Generated Password: %s\n", password);
    
    return 0;
}

