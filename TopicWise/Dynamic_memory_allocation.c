// dynamic memory allocation  
 
 
 
#include<stdio.h> 
#include<stdlib.h> 
int main() 
{ 
    int *arr , i , oldSize  ,newSize; 
    printf("\n the number of integers : = "); 
    scanf("%d",&oldSize); 
 
    // arr = (int * )malloc(n*sizeof(int)); 
    arr = (int * )calloc(oldSize,sizeof(int)); 
     
    printf("\n enter the %d values for array : = \n",oldSize); 
    for ( i = 0; i < oldSize; i++) 
    { 
        scanf("%d",arr+i); 
    } 
     
    printf("\n values of array are: = \n"); 
    for ( i = 0; i < oldSize; i++) 
    { 
        printf("%d  ",*(arr+i)); 
    } 
 
    printf("\n i = %d ",i); 
 
    printf("\n please enter the new Size to increse : = "); 
    scanf("%d",&newSize);// 4 
 
    arr = (int * )realloc(arr,newSize * sizeof(int)); 
 
    printf("\n enter the new values : = "); 
    for (int  j = i; j < (oldSize + newSize) ; j++) // 5  
    { 
        scanf("%d",arr+j); 
    } 
     
    printf("\n the new values : = "); 
    for (int  j = 0; j < (oldSize + newSize) ; j++) // 5  
    { 
        printf("%d , ",*(arr+j)); 
    } 
 
    return 0 ;  
}