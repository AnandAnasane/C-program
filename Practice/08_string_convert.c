// WAP to convert upper case to lower case and lower case to upper case.

# include <stdio.h>

int main()
{
    char str[] = "mAHaBhaRaT";

    for(int i = 0; str [i] != '\0'; i++)
    {
        if (str[i] >= 65 && str[i] <= 91)
        {
            printf("%c", str[i] + 32);
        }
        else if (str[i] >= 97 && str[i] <= 122)
        {
            printf("%c", str[i] - 32);
        }
    }
    return 0;

}