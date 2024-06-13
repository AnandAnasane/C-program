#include <stdio.h>
#define LINE printf("\n -------------------------------------------- \n");
int main()

{
    int ch, a, b;
    int *ptr1 = &a;
    int *ptr2 = &b;

    printf("Enter the Value of A and B :");
    scanf("%d%d", &a, &b);

    LINE

        do
    {
        LINE

        printf("option 1 : Addition \n");
        printf("option 2 : substraction \n");
        printf("option 3 : Multiplication \n");
        printf("option 4 : Division \n");


        printf("Enter the choice..");
        scanf("%d", &ch);

        LINE

            switch (ch)
        {
        case 1:
            printf("The addition %d + %d = %d", *ptr1, *ptr2, (*ptr1) + (*ptr2));
            break;
        case 2:
            printf("The Substraction %d - %d = %d", *ptr1, *ptr2, (*ptr1) - (*ptr2));
            break;
        case 3:
            printf("The Multiplication %d X %d = %d", *ptr1, *ptr2, (*ptr1) * (*ptr2));
            break;
        case 4:
            printf("The Division %d / %d = %d", *ptr1, *ptr2, (*ptr1) / (*ptr2));
            break;
        default:
            printf("Invaid Responce......!!!!!");
            break;
        }
    }
    while (ch != 0);

    printf("End of main.....!!!");

        return 0;
}