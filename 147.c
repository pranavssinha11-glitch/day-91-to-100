#include <stdio.h>
#include <stdlib.h>

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
    FILE *fp;
    struct Employee emp;
    
    // Input employee details
    printf("Enter employee details:\n");
    printf("Name: ");
    scanf(" %[^\n]", emp.name);
    printf("ID: ");
    scanf("%d", &emp.id);
    printf("Joining Date (DD MM YYYY): ");
    scanf("%d %d %d", &emp.joiningDate.day, &emp.joiningDate.month, &emp.joiningDate.year);

    // Open binary file for writing
    fp = fopen("employee.dat", "wb");
    if(fp == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    // Write employee structure to file
    fwrite(&emp, sizeof(struct Employee), 1, fp);
    fclose(fp);

    printf("\nEmployee data stored in file successfully.\n");

    // Open binary file for reading
    fp = fopen("employee.dat", "rb");
    if(fp == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    struct Employee readEmp;

    // Read employee data from file
    fread(&readEmp, sizeof(struct Employee), 1, fp);
    fclose(fp);

    // Display employee details read from file
    printf("\nEmployee details read from file:\n");
    printf("Name: %s | ID: %d | Joining Date: %02d/%02d/%04d\n",
           readEmp.name, readEmp.id,
           readEmp.joiningDate.day, readEmp.joiningDate.month, readEmp.joiningDate.year);

    return 0;
}
