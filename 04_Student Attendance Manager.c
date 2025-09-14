#include <stdio.h>
#include <string.h>

struct Student {
    char name[50];
    int rollNo;
    int presentDays;
    int totalDays;
};

int main() {
    int n, i;
    printf("Enter number of students: ");
    scanf("%d", &n);

    struct Student s[n];

    for(i = 0; i < n; i++) {
        printf("\nEnter name of student %d: ", i+1);
        scanf("%s", s[i].name);
        printf("Enter roll number: ");
        scanf("%d", &s[i].rollNo);
        printf("Enter total days: ");
        scanf("%d", &s[i].totalDays);
        printf("Enter present days: ");
        scanf("%d", &s[i].presentDays);
    }

    printf("\n------ Attendance Report ------\n");
    for(i = 0; i < n; i++) {
        float percentage = (s[i].presentDays * 100.0) / s[i].totalDays;
        printf("Name: %s | Roll No: %d | Attendance: %.2f%%\n", 
                s[i].name, s[i].rollNo, percentage);
    }

    return 0;
}

