#include <stdio.h>

#define REGULAR 0
#define INCOMPLETE 1
#define WITHDRAWN 2

struct Student
{
    int id;
    char name[20];
    float ct_marks[4];
    float attendance;
    float secA, secB;
    int registrationStatus;
};

float ctMarks(struct Student *s)
{
    float total = 0.0;
    float lowest = s->ct_marks[0];

    for (int i = 0; i < 4; i++)
    {
        total += s->ct_marks[i];

        if (s->ct_marks[i] < lowest)
        {
            lowest = s->ct_marks[i];
        }
    }

    return total - lowest;
}

float computeFinalScore(struct Student *s)
{
    float tf_marks = s->secA + s->secB;
    float total = (ctMarks(s) / 60.0) * 20.0 + (s->attendance * 0.1) + (tf_marks / 210) * 70;

    return total;
}

void statistics(struct Student arr[], int size)
{
    int regularCount = 0;
    float sumAttendace = 0.0;
    float sumCT[4] = {0.0};
    float sumSecA = 0.0;
    float sumSecB = 0.0;
    float sumFinal = 0.0;

    for (int i = 0; i < size; i++)
    {
        if (arr[i].registrationStatus == 0)
        {
            regularCount++;
            sumAttendace += arr[i].attendance;
            sumSecA += arr[i].secA;
            sumSecB += arr[i].secB;

            for (int j = 0; j < 4; j++)
            {
                sumCT[j] += arr[i].ct_marks[j];
            }

            sumFinal += computeFinalScore(&arr[i]);
        }
    }

    float regularPercentage = ((float)regularCount / size) * 100.0;
    printf("Percentage of Regular Students: %.2f%%\n\n", regularPercentage);

    if (regularCount > 0)
    {
        printf("--- Averages for Regular Students ---\n");
        printf("Average Attendance: %.2f%%\n", sumAttendace / regularCount);

        for (int j = 0; j < 4; j++)
        {
            printf("Average CT %d: %.2f\n", j + 1, sumCT[j] / regularCount);
        }

        printf("Average Section A: %.2f\n", sumSecA / regularCount);
        printf("Average Section B: %.2f\n", sumSecB / regularCount);
        printf("Average Final Score: %.2f%%\n", sumFinal / regularCount);
    }
    else
    {
        printf("No regular students found. Cannot calculate averages.\n");
    }
}