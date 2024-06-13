#include <stdio.h>
int main()
{
        int res, ch;
        int a;
        int b;
        int *ptr1 = &a;
        int *ptr2 = &b; // pointer

        int **dptr = &ptr1;   // double pointer
        int ***tdptr = &dptr; // tripple pointer

        printf("\n enter the values of a and b =");
        scanf("%d%d", &a, &b);

        do
        {
                printf("\n 1 : addition");
                printf("\n 2 : substraction");
                printf("\n 3 : multiplication");
                printf("\n 4 : division");
                printf("\n 0 : Exit");

                printf("\n enter the choice =");
                scanf("%d", &ch);

                switch (ch)
                {
                case 1:
                        printf("\n the result is %d+%d=%d", *ptr1, *ptr2, (*ptr1) + (*ptr2));
                        break;
                case 2:
                        printf("\n the result is %d-%d=%d", *ptr1, *ptr2, (*ptr1) - (*ptr2));
                        break;
                case 3:
                        printf("\n the result is %d*%d=%d", *ptr1, *ptr2, (*ptr1) * (*ptr2));
                        break;
                case 4:
                        printf("\n the result is %d/%d=%d", *ptr1, *ptr2, (*ptr1) / (*ptr2));
                        break;
                default:
                        printf("\n invalid choice...!\n");
                        break;
                }

        } while (ch != 0);
        // if my choice is equal to 0 then it will stop or if my choice is
        // not equal to 0 then it will continue to running untill it becomes 0

        printf("\n end of program...!");
        return 0;
}

// #include<stdio.h>
// int main()
// {
//     int res,ch;
//     int a;
//     int b;
//     int *ptr1 = &a;
//     int *ptr2 = &b; // pointer

//     int **dptr = &ptr1 ; // double pointer
//     int ***tdptr = &dptr ; // tripple pointer

//     printf("\n enter the values of a and b =");
//     scanf("%d%d",&a,&b);

//     do
//     {
//         printf("\n 1 : addition");
//         printf("\n 2 : substraction");
//         printf("\n 3 : multiplication");
//         printf("\n 4 : division");
//         printf("\n 0 : Exit");

//         printf("\n enter the choice =");
//         scanf("%d",&ch);

//         switch(ch)
//         {
//             case 1: printf("\n the result is %d+%d=%d",*ptr1,*ptr2,(*ptr1)+(*ptr2));
//                     break;
//             case 2: printf("\n the result is %d-%d=%d",*ptr1,*ptr2,(*ptr1)-(*ptr2));
//                     break;
//             case 3: printf("\n the result is %d*%d=%d",*ptr1,*ptr2,(*ptr1)*(*ptr2));
//                     break;
//             case 4: printf("\n the result is %d/%d=%d",*ptr1,*ptr2,(*ptr1)/(*ptr2));
//                     break;
//             default: printf("\n invalid choice...!\n");
//         }

//     } while (ch != 0);
//     // if my choice is equal to 0 then it will stop or if my choice is
//     // not equal to 0 then it will continue to running untill it becomes 0

//     printf("\n end of program...!");
//     return 0;
// }