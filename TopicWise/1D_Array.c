#include<stdio.h> 
#define LINE printf("\n ------------------------------------------------------- \n"); 
int main() 
{ 
    LINE 
    int arr[3]= { 10,11,12 }; 
 
 
    for (int i = 0; i < 3; i++) 
    {  
           printf("\n The array elements are = arr[%d] = %d \n",i,arr[i]);
    } 
 
    LINE 
    return 0 ;  
}