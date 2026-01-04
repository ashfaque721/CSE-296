#include <stdio.h>

int main() {
    int n;

    printf("Enter a 4 digit number: ");
    scanf("%d", &n);

    n = ((n % 10) * 1000) + ((n / 10) % 10) * 100 + ((n / 100) % 10) * 10 + n / 1000;

    printf("%d", n);
}
