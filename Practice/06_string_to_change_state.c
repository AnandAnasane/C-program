//  To change its state into lower case.
# include <stdio.h>

int main()
{
    char str [] = "ANASANE";

    for(int i = 0; str [i] != '\0'; i++)
    {
        if (str[i] >= 65 && str[i] <= 90)
        {
            printf("%c", str[i] + 32);
        }
        else if (str[i] >=97 && str[i] <= 122) 
        {
            printf("%c", str[i]);
        }

    }
    return 0;


}


// #include <stdio.h>
// //  To change its state into upper case.
// int main()

// {
//     // To upper case
//     char str[] = " AnASaNe";

//     for (int i = 0; str[i] != '\0'; i++)
//     {
//         if (str[i] >= 97 && str[i] <= 122)
//         {
//             printf("%c", str[i] - 32);
//         }
//         else if(str[i] >= 65 && str[i] <= 90)
//         {
//             printf("%c", str[i]);
//         }
//     }

//     return 0;
// }