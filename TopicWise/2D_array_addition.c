#include<stdio.h> 
#define LINE printf("\n ------------------------------------------------------- \n"); 
int main() 
{ 

    // 2D Array ADDITION wit the addition stored in third ARRAY named crr.
    // arr - first array.
    // brr - second array.
    // crr - third array.
    LINE 
    int arr[3][3] = { 
        {10,10,10}, 
        {10,10,10}, 
        {10,10,10} 
    }; 
 
    int brr[3][3] = { 
        {1,2,3}, 
        {4,5,6}, 
        {7,8,9} 
    }; 
 
    int crr[3][3] ;  
 
    for (int i = 0; i < 3; i++) 
    { 
        for (int j = 0; j < 3; j++) 
        { 
            crr[i][j] = arr[i][j] + brr[i][j]; 
        } 
    } 
 
 
 
    
    printf("\n the array elements of crr are : =\n"); 
    for (int i = 0; i < 3; i++) 
    { 
        for (int j = 0; j < 3; j++) 
        { 
            printf("| crr[%d][%d] = %d |  ",i,j,crr[i][j]); 
        } 
        printf("\n"); 
    } 
 
    LINE 
    return 0 ;  
}