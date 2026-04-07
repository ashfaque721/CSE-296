#include <stdio.h>

void swap(int *afif, int *navid) {
    int temp = *afif;
    *afif = *navid;
    *navid = temp;
}

int main() {
    int a = 10; int b = 20;
    int *p1 = &a;
    int *p2 = &b;
    swap(p1, p2);
    printf("%d %d", a, b);
    return 0;
}
