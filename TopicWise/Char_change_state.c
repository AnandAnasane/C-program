#include <stdio.h>
#define LINE printf("\n --------------------------------- \n");
int main()
{
    
    char str[] = "AishWarya";
    
    for (int i = 0; str[i] != '\0'; i++) // 2
    {
        if (str[i] >= 97 && str[i] <= 123)
        {
            printf("%c", str[i] - 32);
        }
        else if (str[i] >= 65 && str[i] <= 91)
        {
            printf("%c", str[i]);
        } 
    }
    return 0;
}