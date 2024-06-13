#include<stdio.h> 
#include<string.h> 
// pointer to structyre  
#define LINE printf("\n ---------------------------------------------------- \n"); 
typedef struct Student  
{ 
    int id ; 
    char name[20]; 
    int age ; 
 
}student ; // structure of student  
void outputData(student * ); 
void inputData(student * ptr ); 
 
int main() 
{ 
    student s1 = {101 , "shiv" , 22 } ;  
    student * ptr = &s1; // pointer to structure 
 
    inputData(&s1); 
    outputData(&s1); 
 
    return 0 ; 
} 
void outputData(student * ptr ) 
{ 
    LINE 
    printf("\n id = %d , name = %s , age = %d ",ptr->id,ptr->name,ptr->age); 
    LINE 
} 
void inputData(student * ptr ) 
{ 
    LINE 
    printf("\n enter id : = "); 
    scanf("%d",&ptr->id); 
    printf("\n enter name: = "); 
    scanf("%s",ptr->name); 
    printf("\n enter age : = "); 
    scanf("%d",&ptr->age); 
    LINE 
}