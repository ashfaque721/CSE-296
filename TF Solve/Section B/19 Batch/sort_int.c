#include <stdio.h>

int main()
{
    int n;

    FILE *fp1 = fopen("input1.txt", "r");
    FILE *fp2 = fopen("input2.txt", "r");
    FILE *fout = fopen("sorted.txt", "w");

    int arr[1000], count = 0, temp;

    while (fscanf(fp1, "%d", &arr[count]) != EOF)
        count++;

    while (fscanf(fp2, "%d", &arr[count]) != EOF)
        count++;

    fclose(fp1);
    fclose(fp2);

    for (int i = 0; i < count - 1; i++)
    {
        for (int j = 0; j < count - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    for (int i = 0; i < count; i++)
        fprintf(fout, "%d ", arr[i]);

    fclose(fout);
    return 0;
}