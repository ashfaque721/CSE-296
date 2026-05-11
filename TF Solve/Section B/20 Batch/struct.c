#include <stdio.h>

struct Student
{
    int id;
    int ct;
    int fe;
    int total;
};

int countGrade(int n, struct Student s[n])
{
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i].total >= 80)
            count++;
    }

    return count;
}

int maxNum(int n, struct Student s[n])
{
    struct Student highest = s[0];
    for (int i = 0; i < n; i++)
    {
        if (s[i].total > highest.total)
            highest = s[i];
    }

    return highest.id;
}

int main()
{
    int n;
    printf("Enter number of students: ");
    scanf("%d", &n);
    struct Student s[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d %d %d", &s[i].id, &s[i].ct, &s[i].fe);
        s[i].total = s[i].ct + s[i].fe;
    }

    printf("Highest marks obtained by %d", maxNum(n, s));

    return 0;
}