//  The define just below include is called as MACRO.
// Here the name of MACRO is LINE,ADD,GREATER.



#include<stdio.h> 
#define LINE printf("\n ------------------------------------- \n"); 
#define ADD(a,b) a+b 
#define GREATER(a,b) (a>b)?printf("%d",a): printf("%d",b) 
// #include"CallByValue.c"  Note: We can also include the another file in the programe.
int main() 
{ 
    LINE 
    int a , b ; 
    printf("\n enter a and b : = "); 
    scanf("%d%d",&a,&b); 
    printf("a = %d , b = %d ",a , b ); 
     
    printf("\n addition is = %d \n",ADD(a,b)); 
    GREATER(a,b); 
 
    LINE 
    return 0 ; 
}

