#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
    int roll;
    char name[20];
    float marks;
    char grade[3];
} Student;

int main()
{
    int n;
    FILE *fp = fopen("epstein_students.txt", "r");
    fscanf(fp, "%d", &n);

    Student *students = malloc(n * sizeof(Student));

    Student *ptr = students;

    while(ptr < students + n)
    {
        fscanf(fp, "%d %s %f", &ptr->roll, ptr->name, &ptr->marks);
        ptr++;
    }

    ptr = students;

    while (ptr < students + n)
    {
        if (ptr->marks >= 80) strcpy(ptr->grade, "A+");
        else if (ptr->marks > 75) strcpy(ptr->grade, "A");
        else if (ptr->marks > 69) strcpy(ptr->grade, "B+");
        else if (ptr->marks > 64) strcpy(ptr->grade, "B");
        else if (ptr->marks > 60) strcpy(ptr->grade, "B-");
        else strcpy(ptr->grade, "F");

        ptr++;
    }

    ptr = students;

    while(ptr < students + n)
    {
        printf("Name: %s\tRoll: %d\tMarks: %.2f\tGrade: %s\n", ptr->name, ptr->roll, ptr->marks, ptr->grade);
        ptr++;
    }

    free(students);
}
