//  WAP to count upper case, lower case, and special characters

#include <stdio.h>

int main()
{
    char str[] = "Anand anASaNe @_ 12345";
    int upp = 0;
    int low = 0;
    int spl = 0;
    int num = 0;

    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] >= 97 && str[i] <= 122)
        {
            low++;
        }
        else if (str[i] >= 65 && str[i] <= 91)
        {
            upp++;
        }
        else if (str[i] >= 48 && str[i] <= 57)
        {
            num++;
        }
        else
        {
            spl++;
        }
    }

    printf("Total lower character is %d \n", low);
    printf("Total upper character is %d \n", upp);
    printf("Total digit character is %d \n", num);
    printf("Total special character is %d \n", spl);
    return 0;
}