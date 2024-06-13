// CALL BY VALUE
// NOTE: In this method only value of the main variable is passed to the user defined function.
// i.e There will be no change in the variable of the main function.


#include<stdio.h> 
void swappingCallByValue(int , int ); 
int main() 
{ 
    int a , b ; 
    printf("\n enter a and b : = "); 
    scanf("%d%d",&a,&b); 
     
    swappingCallByValue(a,b); 
    printf("\n inside main() a = %d , b = %d ",a,b); 
    return 0 ;  
} 
// call by value  
void swappingCallByValue( int a , int b )// int a = 10 , int b = 20  
{ 
    int temp = a ; 
    a = b ; 
    b = temp; 
    printf("\n inside swappingCallByValue() a = %d , b = %d ",a,b); 
 
}