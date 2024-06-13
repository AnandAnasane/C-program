// WAP to print character using string 

# include <stdio.h>

int main ()
{
    // char str[] = "Anand";  ---Type 1  to add character using string...

    char str [10] = {'A','n','a','n','d','\0'} // type 2 -- to add character using string..

        for(int i = 0; str[i] != '\0'; i++)
        {
            printf("%c", str[i]);
        }
    return 0;
}