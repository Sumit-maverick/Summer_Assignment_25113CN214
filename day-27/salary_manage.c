/*Write a program to Create salary management system. */
#include <stdio.h>

struct Salary {
    int id;
    float basic;
    float hra;
    float da;
    float net;
};

int main() {
    struct Salary salaries[100];
    int n, i;

    printf("Enter the number of employees: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("Enter details for employee %d:\n", i + 1);
        printf("ID: ");
        scanf("%d", &salaries[i].id);
        printf("Basic Salary: ");
        scanf("%f", &salaries[i].basic);
        printf("HRA: ");
        scanf("%f", &salaries[i].hra);
        printf("DA: ");
        scanf("%f", &salaries[i].da);
    }

    // Calculate net salary
    for (i = 0; i < n; i++) {
        salaries[i].net = salaries[i].basic + salaries[i].hra + salaries[i].da;
    }

    printf("\nSalary Records:\n");
    for (i = 0; i < n; i++) {
        printf("ID: %d, Basic: %.2f, HRA: %.2f, DA: %.2f, Net: %.2f\n", salaries[i].id, salaries[i].basic, salaries[i].hra, salaries[i].da, salaries[i].net);
    }

    return 0;
}