#include<stdio.h> 
#define LINE printf("\n -------------------------------------------------- \n"); 
int main() 
{ 
    LINE 
 
    int n ; 
    printf("\n enter the size of arrya : = "); 
    scanf("%d",&n); 
     
    // int brr[5];// declration of array  
    // int arr[5] = {11,22,33,44,55}; // initialization of array  
 
    int arr[n] ; 
 
    // printf("\n arr[0] = %d ",arr[0]); 
    // printf("\n arr[1] = %d ",arr[1]); 
    // printf("\n arr[2] = %d ",arr[2]); 
    // printf("\n arr[3] = %d ",arr[3]); 
    // printf("\n arr[4] = %d ",arr[4]); 
 
    printf("\n enter the array elements : = "); 
    for (int i = 0; i < n; i++) 
    { 
        printf("\nEnter the arr[%d] element : = ",i); 
        scanf("%d",&arr[i]); 
    } 
    LINE 
 
    printf("\nThe array values are \n"); 
    for (int i = 0; i < n; i++) 
    { 
        printf("\n arr[%d] = %d ",i,arr[i]); 
    } 
     
    int max = arr[0]; 
 
    for (int i = 0; i < n; i++)// 5 
    { 
        if (max < arr[i]) 
        { 
            max = arr[i]; 
        }    
    } 
     
    printf("\n the maximum elemet is : = %d \n",max); 
 
    LINE 
 
    int min = arr[0]; 
 
    for (int i = 0; i < n; i++)// 5 
    { 
        if (min > arr[i]) 
        { 
            min = arr[i]; 
        }    
    } 
     
    printf("\n the minimum elemet is : = %d \n",min); 
 
    LINE 
    return 0 ;  
}