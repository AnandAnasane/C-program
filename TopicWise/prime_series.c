
#include<stdio.h> 

void primeSeries(); 
int main() 
{ 
    primeSeries();  
    return 0; 
} 
void primeSeries()   
{ 
    int cnt=0; 
    int n; 
    printf("\n Enter any number to Print the Series of Prime Number : - \n"); 
    scanf("%d",&n); 
    for(int j = 1 ; j <= n ; j++) 
    { 
        for(int i=2 ; i< j ; j++)  
        { 
            if(j%i==0) 
            { 
                cnt++; 
            } 
        } 
        if(cnt==0) 
        { 
            printf("%d ",j); 
        } 
        else 
        { 
            cnt=0; 
        
        } 
    } 
} 
