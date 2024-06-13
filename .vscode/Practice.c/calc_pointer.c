#include <stdio.h>
#define LINE printf("\n ------------------- \n");

int main()
{
    int a;
    int b;
    int choice;
    int *ptr1 = &a;
    int *ptr2 = &b;

    printf("1: addition \n");
    printf("4: Substraction \n");
    printf("1: Multiplication \n");
    printf("1: Division \n");

    do
    {

        printf("Enter the value of A and B: ");
        scanf("%d %d", &ptr1, &ptr2);

        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("Addition is %d",( *ptr1 + *ptr2));
            break;
        case 2:
            printf("Substraction is %d", (*ptr1 - *ptr2));
            break;
        case 3:
            printf("Multiplication is %d", (*ptr1 * *ptr2));
            break;
        case 4:
            printf("Division is %d", (*ptr1 / *ptr2));
            break;
        default:
            printf("Invalid Responce....!!!");
            break;
        }

    } while (choice == 0);
    printf("End of main");

    return 0;
}