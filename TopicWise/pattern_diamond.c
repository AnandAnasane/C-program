#include<stdio.h> 
int main() 
{ 
    int k = 0 ; 
    for (int  i = 1; i <= 9; i++)// 6 
    { 
        i <= 5 ? k++ : k--;// 4 
        for (int j = 1; j <= 9; j++)// 1  
        { 
            if (j>= 6 - k  && j<= 4 + k)// 1 >= 2 && 1 <= 8 
            { 
                printf("* "); 
            } 
            else 
            { 
                printf("  "); 
            } 
        }
        printf("\n"); 
    } 
/* 
        * 
      * * *        
    * * * * *      
  * * * * * * *    
* * * * * * * * *  
  * * * * * * *   
    * * * * *  
      * * * 
        *    
*/ 
    return 0 ; 
}