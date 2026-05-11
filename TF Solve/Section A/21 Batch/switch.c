#include <stdio.h>

int main()
{
    int a = 1;
    switch (a)
    {
    case 1:
        printf("Try to be ");
    case 2:
        printf("a good person");
    case 3:
        printf(", not only a good student");
        break;
    case 4:
        printf("and be sincere.");
        break;
    default:
        printf("Fuck");
    }
}