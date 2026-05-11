#include <stdio.h>
#include <stdlib.h>

int *fn(int *A, int m, int *B, int a)
{
    int *C = (int *)malloc((m + a) * sizeof(int));
    int i = 0;
    for (i = 0; i < m; i++)
        *(C + i) = *(A + i);
    for (i = 0; i < a; i++)
        *(C + m + i) = *(B + i);

    return C;
}

int main()
{

    int m, n;

    printf("Enter m: ");
    scanf("%d", &m);
    int *P = (int *)malloc(m * sizeof(int));
    for (int i = 0; i < m; i++)
        scanf("%d", (P + i));

    printf("Enter n: ");
    scanf("%d", &n);
    int *Q = (int *)malloc(n * sizeof(int));
    for (int i = 0; i < n; i++)
        scanf("%d", (Q + i));

    int *C = fn(P, m, Q, n);

    free(P);
    free(Q);

    for (int i = 0; i < (m + n); i++)
    {
        printf("%d ", *(C + i));
    }

    free(C);
}
