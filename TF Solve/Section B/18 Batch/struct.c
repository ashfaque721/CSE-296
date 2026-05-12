#include <stdio.h>

struct Student
{
    int id;
    char name[20];
    char thesis[20];
};

int main()
{
    int n;
    scanf("%d", &n);

    struct Student s[n];
    for (int i = 0; i < n; i++)
        scanf("%d %s %[^\n]", &s[i].id, s[i].name, s[i].thesis);

    FILE *fp = fopen("students.txt", "w");

    for (int i = 0; i < n; i++)
        fprintf(fp, "%d %s %s\n", s[i].id, s[i].name, s[i].thesis);

    fclose(fp);

    int target_id, target_idx = -1;
    printf("Enter target id: ");
    scanf("%d", &target_id);

    for (int i = 0; i < n; i++)
    {
        if (s[i].id == target_id)
            target_idx = i;
    }

    if (target_idx != -1)
        printf("%d %s %s\n", s[target_idx].id, s[target_idx].name, s[target_idx].thesis);
    else
        printf("Data not found");
    return 0;
}