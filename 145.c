#include <stdio.h>

// Define structure for Student
struct Student {
    char name[50];
    int roll;
    int marks;
};

// Function to find and return the top student
struct Student findTopper(struct Student students[], int n) {
    int i, topperIndex = 0;
    for(i = 1; i < n; i++) {
        if(students[i].marks > students[topperIndex].marks) {
            topperIndex = i;
        }
    }
    return students[topperIndex];
}

int main() {
    struct Student students[3];
    int i;
    
    // Input details for 3 students
    for(i = 0; i < 3; i++) {
        printf("Enter details of student %d:\n", i + 1);
        printf("Name: ");
        scanf(" %[^\n]", students[i].name);
        printf("Roll: ");
        scanf("%d", &students[i].roll);
        printf("Marks: ");
        scanf("%d", &students[i].marks);
    }

    // Get the top student
    struct Student top = findTopper(students, 3);

    // Print top student's details
    printf("\nTop Student: %s | Roll: %d | Marks: %d\n", top.name, top.roll, top.marks);

    return 0;
}
