#include <stdio.h>
int xstrlen(char *string)
{
    int count = 0;
    while (string[count] != '\0')
    {
        count++;
    }
    return count;
};
void xstrcat(char *t, char *s)
{
    while (*s != '\0')
    {
        s++;
    }
    while (*t != '\0')
    {
        *s = *t;
        s++;
        t++;
    }
};
void xstrcpy(char *s, char *t)
{
    while (*t != '\0')
    {
        *s = *t;
        t++;
        s++;
    }
    *s = '\0';
};
void main()
{
    char s[1000], t[1000], m[1000], z;
    int length, length1;
    printf("First String : ");
    scanf("%[^*]s", t);
    printf("Second String : ");
    scanf("%[^$]s", s);
    length = xstrlen(s);
    length1 = xstrlen(t);
    printf("Length of 1st string : %d\n", length);
    printf("Length of 2nd string : %d\n", length1);
    xstrcat(s, t);
    printf("\nConcatinated String : %s", t);
    xstrcpy(t, s);
    printf("\nCopied to 1st string : %s\n", t);
};