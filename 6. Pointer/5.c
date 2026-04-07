#include <stdio.h>

int main() {

    char filename[20];
    scanf("%s", filename);

    FILE *fp = fopen(filename, "w");
    fprintf(fp, "Hello World\n");
    fprintf(fp, "Hello from epstein island\n");

    fclose(fp);
}
