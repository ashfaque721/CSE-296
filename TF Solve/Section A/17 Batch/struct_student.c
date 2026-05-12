#include <stdio.h>

struct Student
{
    char name[20];
    int ID;
    float CGPA;
};

int main()
{
    int N;
    scanf("%d", &N);

    struct Student s[N];
    for (int i = 0; i < N; i++)
        scanf("%s %d %f", s[i].name, &s[i].ID, &s[i].CGPA);

    for (int i = 0; i < N - 1; i++)
        for (int j = 0; j < N - i - 1; j++)
            if (s[j].CGPA < s[j + 1].CGPA)
            {
                struct Student temp = s[j];
                s[j] = s[j + 1];
                s[j + 1] = temp;
            }
}
