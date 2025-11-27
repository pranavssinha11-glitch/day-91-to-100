#include <stdio.h>
#include <string.h>

// Define structure for Student
struct Student {
    char name[50];
    int roll;
    int marks;
};

// Function to compare two students
int areIdentical(struct Student s1, struct Student s2) {
    if(strcmp(s1.name, s2.name) == 0 && s1.roll == s2.roll && s1.marks == s2.marks)
        return 1; // Identical
    else
        return 0; // Not identical
}

int main() {
    struct Student s1, s2;

    // Input first student
    printf("Enter details of student 1:\n");
    printf("Name: ");
    scanf(" %[^\n]", s1.name);
    printf("Roll: ");
    scanf("%d", &s1.roll);
    printf("Marks: ");
    scanf("%d", &s1.marks);

    // Input second student
    printf("\nEnter details of student 2:\n");
    printf("Name: ");
    scanf(" %[^\n]", s2.name);
    printf("Roll: ");
    scanf("%d", &s2.roll);
    printf("Marks: ");
    scanf("%d", &s2.marks);

    // Check if identical
    if(areIdentical(s1, s2))
        printf("\nSame\n");
    else
        printf("\nDifferent\n");

    return 0;
}
