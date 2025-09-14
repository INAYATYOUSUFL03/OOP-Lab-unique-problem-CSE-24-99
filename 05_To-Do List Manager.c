#include <stdio.h>
#include <string.h>

struct Task {
    char description[100];
    int priority; 
};

int main() {
    int n, i;
    printf("Enter number of tasks: ");
    scanf("%d", &n);

    struct Task tasks[n];

    for(i = 0; i < n; i++) {
        printf("\nEnter description of task %d: ", i+1);
        scanf(" %[^\n]", tasks[i].description);
        printf("Enter priority (1=High, 2=Medium, 3=Low): ");
        scanf("%d", &tasks[i].priority);
    }

    printf("\n------ To-Do List ------\n");
    for(i = 0; i < n; i++) {
        char *p;
        if(tasks[i].priority == 1) p = "High";
        else if(tasks[i].priority == 2) p = "Medium";
        else p = "Low";

        printf("Task: %s | Priority: %s\n", tasks[i].description, p);
    }

    return 0;
}

