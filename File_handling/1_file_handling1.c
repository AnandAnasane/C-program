#include <stdio.h>
#include<stdlib.h>

int main()
{
    char str1 [20];
    char str2 [10];

    FILE *file = fopen("Data.txt", "w");

    if (file != NULL)
    {
        printf("\n the file is opened....!!! \n");
        
    printf("Enter the string: ");
    scanf("%s", str1);

    printf("Enter the second string: \n");
    scanf("%s", str2);
    // for(int i = 0; str[i] != '\0'; i++)
    // {
    //     fputc(str[i], file);
    // }

    // fputc('A', file);
    fputs(str1, file);
    fputs(str2, file);
    printf("The data has been printed");
    }
    else{

        printf("Sorry we cant open the file...!! \n");
        exit(1); 
    }

    fclose(file);
    printf("\n file is closed....!! \n");

    return 0;
}