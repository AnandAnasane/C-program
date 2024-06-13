#include <stdio.h>
int main()
{
    int a, b, ch;
    int *ptr1 = &a;  
    int *ptr2 = &b;
    int **dptr = &ptr1;
    int ***tdptr = &dptr;

    printf("Enter the values of a and b: \n");
    scanf("%d%d", &a, &b);

    do
    {
        printf("\n 1: Addition \n");
        printf("\n 2: Subtraction \n");
        printf("\n 3: Multiplication \n");
        printf("\n 4: Division \n");

        printf("\n Please enter a choice: \n");
        scanf("%d", &ch);

        switch (ch)
        {
        case 1:
            printf("Result = %d+%d=%d \n", **dptr, ***tdptr, (**dptr) + (***tdptr));
            break;

        case 2:
            printf("Result = %d-%d=%d \n", **dptr, ***tdptr, (**dptr) - (***tdptr));
            break;

        case 3:
            printf("Result = %d*%d=%d \n", **dptr, ***tdptr, (**dptr) * (***tdptr));
            break;

        case 4:
            printf("Result = %d/%d=%d \n", **dptr, ***tdptr, (**dptr) / (***tdptr));
            break;

        default:
            printf("Invalid Choice......! \n");
            break;
        }
    }

    while (ch != 0);

    printf("End of Main.....!");

    return 0;
}