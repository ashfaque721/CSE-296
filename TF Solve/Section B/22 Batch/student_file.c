#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int isValidEmail(const char *email)
{
    const char *suffix = "@ipe.buet.ac.bd";
    int emailLen = strlen(email);
    int suffixLen = strlen(suffix);

    if (emailLen < suffixLen)
        return 0;

    const char *emailSuffix = email + (emailLen - suffixLen);
    for (int i = 0; i < suffixLen; i++)
    {
        if (tolower((unsigned char)emailSuffix[i]) != suffix[i])
        {
            return 0;
        }
    }
    return 1;
}

int isValidID(const char *id)
{
    if (strlen(id) != 9)
        return 0;

    if (id[0] != '2' || id[1] != '0')
        return 0;
    if (id[4] != '0' || id[5] != '8')
        return 0;

    int lastThree = atoi(id + 6);
    if (lastThree >= 121)
        return 0;

    return 1;
}

int main()
{
    FILE *inFile = fopen("students.txt", "r");
    FILE *validFile = fopen("valid.txt", "w");
    FILE *invalidFile = fopen("invalid.txt", "w");
    FILE *summaryFile = fopen("summary.txt", "w");
}