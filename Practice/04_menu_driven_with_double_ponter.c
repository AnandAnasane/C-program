#include <stdio.h>
# define LINE printf("\n ----------------------------- \n");

int main()

{
    int a, b, ch;
    int *ptr1 = &a;
    int *ptr2 = &b;
    int **dptr1 = &ptr1;
    int **dptr2 = &ptr2;

    printf("Enter the value of a and b : ");
    scanf("%d %d", &a, &b);

    do
    {
        
        LINE

        printf("\n 1 : Addition \n");
        printf("\n 2 : Substraction \n");
        printf("\n 3 : Multiplication\n");
        printf("\n 4 : Division\n ");
        printf("\n 0: Exit \n");
        
        LINE
        

        printf("Enter your choice: ");
        scanf("%d", &ch);

        LINE

       

        switch (ch)
        {
        case 1:
            printf("The addition of %d + %d = %d", **dptr1, **dptr2, (**dptr1) + (**dptr2));
            break;
        case 2:
            printf("The Substraction of %d - %d = %d", **dptr1, **dptr2, (**dptr1) - (**dptr2));
            break;
        case 3:
            printf("The Multiplication of %d X %d = %d", **dptr1, **dptr2, ((**dptr1) * (**dptr2)));
            break;
        case 4:
            printf("The Division of %d / %d = %d", **dptr1, **dptr2, (**dptr1) / (**dptr2));
            break;

        default:
            printf("Invalid Responce......!!!!!");
            break;
        }

    } while (ch != 0);
    printf("End of main ....!!!!");

    return 0;
}
