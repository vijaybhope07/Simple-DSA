#include <stdio.h>
struct Student {
    int rollNo;
    char name[100];
    float CGPA;
    char branch[50];

};

int main() {
    struct Student s;
    printf("Enter roll number: ");
    scanf("%d", &s.rollNo);

    printf("Enter name: ");
    scanf("%s", s.name);

    printf("Enter branch: ");
    scanf("%s", s.branch);

    printf("Enter CGPA: ");
    scanf("%f", &s.CGPA);

    printf("Student Info: \n");
    printf("Roll Number: %d\n", s.rollNo);
    printf("Name: %s\n", s.name);
    printf("CGPA: %.2f\n", s.CGPA);
    printf("Branch: %s\n", s.branch);

    return 0;
}