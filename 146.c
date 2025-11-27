#include <stdio.h>

// Define structure for Date
struct Date {
    int day;
    int month;
    int year;
};

// Define structure for Employee with nested Date
struct Employee {
    char name[50];
    int id;
    struct Date joiningDate;
};

int main() {
    struct Employee emp;

    // Input employee details
    printf("Enter employee details:\n");
    printf("Name: ");
    scanf(" %[^\n]", emp.name);
    printf("ID: ");
    scanf("%d", &emp.id);
    printf("Joining Date (DD MM YYYY): ");
    scanf("%d %d %d", &emp.joiningDate.day, &emp.joiningDate.month, &emp.joiningDate.year);

    // Print employee details
    printf("\nName: %s | ID: %d | Joining Date: %02d/%02d/%04d\n",
           emp.name, emp.id,
           emp.joiningDate.day, emp.joiningDate.month, emp.joiningDate.year);

    return 0;
}
