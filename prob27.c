#include <stdio.h>
struct Student
{
    int roll;
    char name[100];
    float physics, chemistry, math, total;
};

int main()
{
    int i, j, n, temp;
    printf("Enter no. of students : ");
    scanf("%d", &n);
    struct Student s[n];
    for (i = 0; i < n; i++)
    {
        printf("\nEnter Student Details :\n");
        printf("Roll : ");
        scanf("%d", &s[i].roll);
        printf("First Name : ");
        scanf("%s", s[i].name);
        printf("Marks In Physics : ");
        scanf("%f", &s[i].physics);
        printf("Marks In Maths : ");
        scanf("%f", &s[i].math);
        printf("Marks In Chemistry : ");
        scanf("%f", &s[i].chemistry);
        s[i].total = s[i].physics + s[i].chemistry + s[i].math;
    }
    for (i = 0; i < n - 1; i++)
    {
        for (j = 0; j < n - i; j++)
        {
            if (s[j].total < s[j + 1].total)
            {
                struct Student temp = s[j];
                s[j] = s[j + 1];
                s[j + 1] = temp;
            }
        }
    }
    printf("\nResult\n");
    for (i = 0; i < n; i++)
    {
        printf("\nRank = %d\nRoll = %d\nName = %s\nTotal = %.2f\n", (i + 1), s[i].roll, s[i].name, s[i].total);
    }
    return 0;
}