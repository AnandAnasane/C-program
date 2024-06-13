#include<stdio.h> 
#define LINE printf("\n ------------------------------------------------------- \n"); 
int main() 
{ 
    LINE 
    int n;

    printf("Enter the size of an 1D_Array: = ");
    scanf("%d", &n);

    int arr[n];

    printf("\n enter the array elements : = "); 
    for (int i = 0; i < n; i++) 
    { 
        scanf("%d",&arr[i]); 
       
    } 
    for(int i = 0; i < n; i++)
    {
         printf("\n |arr[%d] = %d| \n", i, arr[i]);
    }

   
    LINE

   
    
    // LINE 
 
    // printf("\n the array elements are : =\n"); 
    // for (int i = 0; i < 3; i++) 
    // { 
    //     for (int j = 0; j < 3; j++) 
    //     { 
    //         printf("| arr[%d][%d] = %d |  ",i,j,arr[i][j]); 
    //     } 
    //     printf("\n"); 
    // } 
    // LINE 
    return 0 ;  
}