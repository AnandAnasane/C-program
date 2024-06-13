// 1. Write a program that checks if a number is positive, negative, or zero. 
// 3. Create a program that takes a month number (1 for January, 2 for February, etc.) and prints the number of days in that month. 
// 4. Create a program that determines the largest of three numbers entered by the user. 
// 5. Write a program that checks if a person is eligible to vote based on their age (assuming the legal voting age is 18). 
// 6. Write a program that takes a month number and prints the name of the month.





// 2. Create a program that determines if a student's grade is an A, B, C, D, or F based on their numerical score (assuming A is 90 or above, B is 80-89, C is 70-79, D is 60-69, and F is below 60). 

#include <stdio.h>

int main()

{
    int a;

    printf("Enter your score :");
    scanf("%d", &a);
    if ( a >= 90 && a<=100)
    {
        printf("Your grade is A+");
    }
    else if (a >= 80 && a <= 89)
    {
        printf("Your grade is B");
    }
    else if (a >= 70 && a <= 79)
    {
        printf("Your grade is C");
    }
    else if (a >= 60 && a <= 69)
    {
        printf("Your grade is D");
    }
    else if (a >= 59 && a <= 50)
    {
        printf("Your grade is F");
    }
    else if (a>=1 && a<50){
        printf("You are Fail ....!");
    }
    else if (a<0 && a>100)
    {
        printf("Your score is Invalid ....!");
    }





    return 0;
}