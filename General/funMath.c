#include <stdio.h>

int add(int a, int b);
int sub(int a, int b);
int mul(int a, int b);
int divide(int a, int b);

int main()
{
    int a, num1, num2, result;

    printf("1 : Addition \n");
    printf("2 : Substraction\n");
    printf("3 : Multiplication \n");
    printf("4 : Division \n");

    printf("Enter your choice::");
    scanf("%d", &a);

    printf("Enter the two variables: \n");
    scanf("%d %d", &num1, &num2);

    if (a == 1)
    {
        result = add(num1, num2);
    }
    else if (a == 2)
    {
        result = sub(num1, num2);
    }
    else if (a == 3)
    {
        result = mul(num1, num2);
    }
    else if (a == 4)
    {
        if (num2 ==0){
            printf("Errorrrrr ....!!!!");
            return 1;
        }
        else{
             result = divide(num1, num2);
        }
       
    }
    else {
        printf("Invalid Option.....!!!!!");
    }
       printf("The result is %d", result);
     
    return 0;
}

int add(int a, int b)
{
    return a + b;
}
int sub(int a, int b)
{
    return a - b;
}
int mul(int a, int b)
{
    return a * b;
}
int divide(int a, int b)
{
    return a / b;
}