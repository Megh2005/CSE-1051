#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void)
{
    FILE *fptr1, *fptr2;
    char path1[200];
    char path2[200];
    char string1[100];
    char string2[100];
    printf("Enter 1st File Path : ");
    scanf("%s", path1);
    printf("Enter 2nd File Path : ");
    scanf("%s", path2);
    fptr1 = fopen(path1, "r");
    fptr2 = fopen(path2, "r");
    if (fptr1 == NULL)
    {
        printf("\nUnable To Open File\n");
        fclose(fptr2);
        return 1;
    }
    if (fptr2 == NULL)
    {
        printf("\nUnable To Open File\n");
        fclose(fptr1);
        return 1;
    }
    while ((!feof(fptr1)) && (!feof(fptr2)))
    {
        fscanf(fptr1, "%s", string1);
        fscanf(fptr2, "%s", string2);
        if (strcmp(string1, string2) != 0)
        {
            printf("\nCONTENT NOT SAME\n");
            fclose(fptr1);
            fclose(fptr2);
            return 0;
        }
    }
    printf("\nContent Same\n");
    fclose(fptr1);
    fclose(fptr2);
    return 0;
}