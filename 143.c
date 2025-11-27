#include <stdio.h>

// Define structure for student
struct Student {
    char name[50];
    int roll;
    int marks;
};

int main() {
    struct Student students[3]; // Array of 3 students
    int i, topperIndex = 0;

    // Input details for 3 students
    for(i = 0; i < 3; i++) {
        printf("Enter details of student %d:\n", i + 1);
        printf("Name: ");
        scanf(" %[^\n]", students[i].name); // Read string with spaces
        printf("Roll: ");
        scanf("%d", &students[i].roll);
        printf("Marks: ");
        scanf("%d", &students[i].marks);
    }

    // Find student with highest marks
    for(i = 1; i < 3; i++) {
        if(students[i].marks > students[topperIndex].marks) {
            topperIndex = i;
        }
    }

    // Print topper
    printf("\nTopper: %s (Marks: %d)\n", students[topperIndex].name, students[topperIndex].marks);

    return 0;
}
