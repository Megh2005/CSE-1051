#include <stdio.h>
#include <math.h>

int main()
{
    int num, originalNum, remainder, n = 0, result = 0;
    printf("Enter an upper limit: ");
    scanf("%d", &num);
    for (int i = 1; i <= num; ++i)
    {
        originalNum = i;
        while (originalNum != 0)
        {
            originalNum /= 10;
            ++n;
        }
        originalNum = i;
        while (originalNum != 0)
        {
            remainder = originalNum % 10;
            result += pow(remainder, n);
            originalNum /= 10;
        }
        if (result == i)
        {
            printf("%d ", i);
        }
        n = 0;
        result = 0;
    }
    printf("\n");
    return 0;
}
