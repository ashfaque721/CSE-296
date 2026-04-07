#include <stdio.h>
#include <stdlib.h>

// Input N, input array, reverse it and print the output in a file
// read N and input array from the file and then print the output in another file

int main() {
    int n;
    printf("Enter size of the array: ");
    scanf("%d", &n);

    int *arr = (int *)malloc(n * sizeof(int));

    int *ptr = arr;

    /* for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    } */

    while(ptr < arr + n) {
        scanf("%d", ptr);
        ptr++;
    }

    ptr = arr;

    /* while(ptr < arr + n) {
        printf("%d ", *ptr);
        ptr++;
    } */

    int i = 0, j = n - 1;

    for(;i < j; i++, j--) {
        int temp = *(ptr + i);
        *(ptr + i) = *(ptr + j);
        *(ptr + j) = temp;
    }

    FILE *fp = fopen("epstein_file_redacted.txt", "w");

    while(ptr < arr + n) {
        fprintf(fp, "%d ", *ptr);
        ptr++;
    }

    free(arr);
    fclose(fp);
}
