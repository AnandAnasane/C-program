// PALLINDROME NUMBER 
// PALLINDROME STRING ????

#include<stdio.h>   
int main()     
{     
    int n,r,sum=0,temp;     
    printf("enter the number=");     
    scanf("%d",&n);     
    temp=n;   // n = 121   
    while(n>0)     
    {     
        r=n%10;    // 1 
        sum=(sum*10)+r; // 121    
        n=n/10;   // 1 
    }     
    if(temp==sum)     
        printf("palindrome number ");     
    else     
        printf("not palindrome");    
return 0;   
}