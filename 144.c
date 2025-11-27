#include <stdio.h>

// Define structure for Student
struct Student {
    char name[50];
    int roll;
    int marks;
};

// Function to print student details
void printStudent(struct Student s) {
    printf("Name: %s | Roll: %d | Marks: %d\n", s.name, s.roll, s.marks);
}

int main() {
    struct Student s1;

    // Input student details
    printf("Enter student details:\n");
    printf("Name: ");
    scanf(" %[^\n]", s1.name); // Read string with spaces
    printf("Roll: ");
    scanf("%d", &s1.roll);
    printf("Marks: ");
    scanf("%d", &s1.marks);

    // Call function to print student details
    printStudent(s1);

    return 0;
}
