#include<stdio.h> 
#include<string.h> 
// Array of structure  
#define LINE printf("\n ---------------------------------------------------- \n"); 
typedef struct Student  
{ 
    int id ; 
    char name[20]; 
    int age ; 
 
}student ; // structure of student  
 
int main() 
{ 
    // int a ; 
    // typedef int * pointer ; 
    // pointer ptr = &a;  
 
    // variable of the structure  
    student s1[3]; // array of student structure  
 
    for (int  i = 0; i < 3; i++) 
    { 
        LINE 
        printf("\n enter the id : = "); 
        scanf("%d",&s1[i].id); 
        printf("\n enter the name : = "); 
        scanf("%s",&s1[i].name); 
        printf("\n enter the age : = "); 
        scanf("%d",&s1[i].age); 
        LINE 
    } 
     
    for (int  i = 0; i < 3; i++) 
    { 
        LINE 
        printf("\n id = %d ",s1[i].id); 
        printf("\n name = %s ",s1[i].name); 
        printf("\n age = %d ",s1[i].age); 
        LINE 
    } 
     
 
    return 0 ; 
}