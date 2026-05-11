#include <stdio.h>

int main()
{
    int id;
    scanf("%d", &id);

    int year = id / 100000;
    int dept = (id / 1000) % 100;
    int roll = id % 1000;

    printf("Year: %d, Dept: %02d, Roll: %03d", year, dept, roll);

    return 0;
}