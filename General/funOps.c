#include <stdio.h>

int areaofSquare(int);
// int isPrime(int);
// int fibo(int);
// int triangle();

int main()
{
    int choice, a, b;

    printf("option 1: Area of Square \n");
    printf("option 2: Find Prime number \n");
    printf("option 3: Fibonacci Series \n");
    printf("option 4: Area of Triangle \n");
    printf("Enter the option : \n");
    scanf("%d", &choice);


    switch(choice){
        case 1: 
        areaofSquare();    
        break;
        
    }

}


int areaofSquare(int)
{
    int a;
    printf("Enter the sides of Square : ");
    scanf("%d", &a);

    printf("The area of Square is %d", a*a);

    return a*a;


}