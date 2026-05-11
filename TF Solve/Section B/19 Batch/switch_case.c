#include <stdio.h>

int main()
{
    float score;
    char grade;

    scanf("%f", &score);

    int s = (int)score / 40;

    switch (s)
    {
    case 0:
        grade = 'F';
        break;
    case 1:
        switch ((int)score / 20)
        {
        case 2:
            grade = 'C';
            break;
        case 3:
            grade = 'B';
            break;
        }
        break;

    case 2:
        grade = 'A';
        break;
    }

    printf("%c", grade);

    return 0;
}