#include<stdio.h> 
#include<string.h> 
// union example 1  
union Student  
{ 
    int id ; 
    char name[20]; 
    char c  ; 
}; 
int main() 
{ 
    union Student s ; 
    s.id = 97; 
 
    printf("\n c = %d ",s.id); 
     
    printf("\n c = %s",s.name); 
    printf("\n c = %c ",s.c); 
    printf("\n size = %d ",sizeof(s)); 
    return 0 ; 
}