#include<stdio.h> 
void fun1(int ); 
void recursion(int ); 
int main() 
{ 
    printf("\n before recursion() "); 
    // fun1(10); 
    recursion(50); 
    printf("\n after recursion() "); 
 
    return 0 ;  
} 
void recursion(int n )//0  
{ 
    if (n <= 0 ) 
    { 
        return; 
    } 
    // printf("\n n = %d ",n);// 10 , 9 , 8 ....... 1  
    recursion(n - 1 ); 
    // printf("\n n = %d ",n);// 1 ,2 , 3 , 4, ....... 10 
 
    if (n % 2 == 0 ) 
    { 
        printf("\n n = %d ",n); 
    } 
} 
 
void fun1(int n) 
{    
    for (int  i = 1; i < n; i++) 
    { 
        printf("\n i = %d \n",i); 
    } 
}