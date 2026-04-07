#include <stdio.h>
#include <stdlib.h>

int main() {

    int count = 0;

    FILE *fp = fopen("epstein_numbers.txt", "r");

    int *arr = (int *)malloc(1000 * sizeof(int));
    int *ptr = arr;

    int n;
    int i = 0;
    while(fscanf(fp, "%d", &n) == 1) {
        *ptr++ = n;
         count++;
    }

    arr = realloc(arr, (count + 1) * sizeof(int));

    int sum = 0;
    for(int i = 0; i < count; i++) {
        sum += arr[i];
    }

    *ptr = sum;

    ptr = arr;

    while(ptr < arr + count + 1) {
        printf("%d ", *(ptr++));
    }

    free(arr);
    return 0;
}
