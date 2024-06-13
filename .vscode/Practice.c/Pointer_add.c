#include <stdio.h>
#define LINE printf("\n ------------------------------------------------------------ \n");

int main()
{
        int choice;
        int a, b;

        int *ptr1 = &a;
        int *ptr2 = &b;

        printf("\n Enter the value of A and B: \n");
        scanf("%d %d", &a, &b);

        do
        {
                LINE

                printf("\n option 1: Addition \n");

                printf("\n option 2: Substraction \n");

                printf("\n option 3: Division \n");

                printf("\n option 4: Multiplication \n");

                printf("\n option 0: Exit \n");

                LINE

                
                
                printf("\n Enter your choice: \n");
                scanf("%d", &choice);

                
                LINE

                    switch (choice)
                {
                case 1:
                        printf("Addition of %d + %d = %d", *ptr1, *ptr2, (*ptr1) + (*ptr2));
                        break;
                case 2:
                        printf("substraction of %d - %d = %d", *ptr1, *ptr2, (*ptr1) - (*ptr2));
                        break;
                case 3:
                        printf("Division of %d / %d = %d", *ptr1, *ptr2, (*ptr1) / (*ptr2));
                        break;
                case 4:
                        printf("Addition of %d X %d = %d", *ptr1, *ptr2, (*ptr1) * (*ptr2));
                        break;
                default:
                        printf("Invalid Response.....!!!");
                        break;
                }

        } while (choice != 0);

        printf("End of main.....!");

        return 0;
}
