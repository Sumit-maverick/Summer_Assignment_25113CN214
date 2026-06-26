/*Write a program to Create marksheet management system. */
#include <stdio.h>

struct Marksheet {
    int id;
    char name[50];
    float Physics;
    float Chemistry;
    float Mathematics;
    float total;
    float percentage;
};

int main() {
    struct Marksheet marksheets[100];
    int n, i;

    printf("Enter the number of students: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("Enter details for student %d:\n", i + 1);
        printf("ID: ");
        scanf("%d", &marksheets[i].id);
        printf("Name: ");
        scanf("%s", marksheets[i].name);
        printf("Physics Marks: ");
        scanf("%f", &marksheets[i].Physics);
        printf("Chemistry Marks: ");
        scanf("%f", &marksheets[i].Chemistry);
        printf("Mathematics Marks: ");
        scanf("%f", &marksheets[i].Mathematics);
    }

    // Calculate total and percentage
    for (i = 0; i < n; i++) {
        marksheets[i].total = marksheets[i].Physics + marksheets[i].Chemistry + marksheets[i].Mathematics;
        marksheets[i].percentage = (marksheets[i].total / 300) * 100;
    }

    printf("\nMark Records:\n");
    for (i = 0; i < n; i++) {
        printf("ID: %d, Name: %s, Physics: %.2f, Chemistry: %.2f, Mathematics: %.2f, Total: %.2f, Percentage: %.2f%%\n", marksheets[i].id, marksheets[i].name, marksheets[i].Physics, marksheets[i].Chemistry, marksheets[i].Mathematics, marksheets[i].total, marksheets[i].percentage);
    }

    return 0;
}