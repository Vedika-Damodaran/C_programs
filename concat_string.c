
#include <stdio.h>

int main()
{
    char str1[100], str2[100];

    printf("Enter a string1: ");
    scanf(" %99[^\n]", str1);

    printf("Enter a string2: ");
    scanf(" %99[^\n]", str2);

    int len = 0;

    for(int i = 0; str1[i] != '\0'; i++)
    {
        len++;
    }

    int j = 0;

    while(str2[j] != '\0' && len < 99)
    {
        str1[len] = str2[j];
        len++;
        j++;
    }

    str1[len] = '\0';

    printf("Concatenated string: %s", str1);

    return 0;
}
