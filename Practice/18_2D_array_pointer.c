#include<stdio.h> // pointer with 2D array  
#define LINE printf("\n ------------------------------------------------------- \n"); 
int main() 
{ 
    LINE 
    int arr[3][3] = { 
        {10,10,10}, 
        {10,10,10}, 
        {10,10,10} 
    }; 
 
    int brr[3][3] = { 
        {10,10,10}, 
        {10,10,10}, 
        {10,10,10} 
    }; 
 
    int crr[3][3] ;  
 
    for (int i = 0; i < 3; i++) 
    { 
        for (int j = 0; j < 3; j++) 
        { 
            *(*(crr+i)+j) =  *(*(arr+i)+j) + *(*(brr+i)+j); 
        } 
    } 
 
    printf("\n the array elements of crr are : =\n"); 
    for (int i = 0; i < 3; i++) 
    { 
        for (int j = 0; j < 3; j++) 
        { 
            printf("| crr[%d][%d] = %d |  ",i,j, *(*(crr+i)+j) ); 
        } 
        printf("\n"); 
    } 
 
    LINE 
    return 0 ;  
}