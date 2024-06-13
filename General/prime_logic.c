#include<stdio.h> 
void prime(int);// function prototype / fucn declaration 
int main() 
{ 
    int n; 
    printf("\n enter the  no to check whether it is a prime no or not : - \n"); 
    scanf("%d",&n); 
    prime(n); // fun call  
    return 0; 
} 

void prime(int n) // fun signature / fun definition 
{ 
    int cnt=0; 
    for(int i=2 ; i< n ; i++) 
    { 
        if(n%i==0) 
        { 
            cnt++; 
            break; 
        } 
    } 
    if(cnt==0) 
    { 
        printf("\n the number = %d is a prime no \n",n); 
    } 
    else 
    { 
        printf("\n the number = %d is not a prime no \n",n); 
    } 
}