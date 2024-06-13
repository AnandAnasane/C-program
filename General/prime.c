#include<stdio.h> 

//  something wrong in this programe.
int isPrime(int ); 
int main() 
{ 
    int num; 
    printf("Enter a number: \n"); 
    scanf("%d", &num); 
    if(isPrime(num)) 
    { 
        printf("%d is a prime number \n", num); 
    } 
    else 
    { 
        printf("%d is not a prime number \n", num); 
    } 
 
    return 0; 
} 
int isPrime(int num) 
{ 
    if(num<=0)
    { 
        return 0; 
    } 
    for(int i=2; i<num; i++) 
    { 
        if(num%i==0) 
        { 
            return 0; 
        } 
        else{ 
            return 1 ; 
        } 
    } 
    return 0; 
}




// # include <stdio.h>

// int main()
// {
//     int n, count = 0;

//     printf("Enter any number :");
//     scanf("%d", &n);

//     for (int i = 1; i <= n; i++)
//     {
//         if (n%i == 0)
//         {
//             count ++;
//         }
//     }

//     if(count == 2)
//     {
//         printf("Prime number");
//     }
//     else
//     {
//        count = 0;
//     }
//     return 0;
// }
