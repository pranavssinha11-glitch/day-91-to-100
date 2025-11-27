#include <stdio.h>
#include <stdlib.h>

struct Student {
    char name[50];
    int roll;
    float marks;
};

int main() {
    // Allocate memory dynamically
    struct Student *s = (struct Student *)malloc(sizeof(struct Student));

    if (s == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    // Input details
    printf("Enter name: ");
    scanf("%s", s->name);

    printf("Enter roll number: ");
    scanf("%d", &s->roll);

    printf("Enter marks: ");
    scanf("%f", &s->marks);

    // Print details
    printf("\n--- Student Details ---\n");
    printf("Name  : %s\n", s->name);
    printf("Roll  : %d\n", s->roll);
    printf("Marks : %.2f\n", s->marks);

    // Free dynamically allocated memory
    free(s);

    return 0;
}
