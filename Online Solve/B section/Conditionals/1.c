#include <stdio.h>

int main()
{

    int distance, time, hour;
    float base_fare = 50, total_fare = 0, charge = 0, chargable_distance, time_charge = 0;
    int final_fare;

    printf("Enter distance, time and hour: ");
    scanf("%d %d %d", &distance, &time, &hour);

    chargable_distance = distance;

    if (chargable_distance > 15)
    {
        charge += (chargable_distance - 15) * 8;
        chargable_distance = 15;
    }
    if (chargable_distance > 5)
    {
        charge += (chargable_distance - 5) * 10;
        chargable_distance = 5;
    };
    if (chargable_distance > 0)
    {
        charge += chargable_distance * 12;
    }

    if (time > 30)
        time_charge = (time - 30) * 2;

    total_fare = base_fare + charge + time_charge;

    if (hour == 1)
        total_fare += total_fare * 0.2;

    final_fare = total_fare + 0.5;

    printf("%d", final_fare);

    return 0;
}