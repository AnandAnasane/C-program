#include<stdio.h> 
#include<string.h> 
// structure passing to function  
#define LINE printf("\n ---------------------------------------------------- \n"); 
typedef struct Student  
{ 
    int id ; 
    char name[20]; 
    int age ; 
 
}student ; // structure of student  
void outputData(student ); 
struct Student inputData(student ); 
 
int main() 
{ 
    student s1 ; // step - 1  
    
    student s = inputData(s1);// step - 4 ( returning strucure will be assignend to s ) 
    outputData(s); // step - 5 ( s will be passed to output date for printing the values) 
 
    return 0 ; 
} 
void outputData(student s ) // will dipslay the value  to the user  
{ 
    LINE 
    printf("\n id = %d , name = %s , age = %d ",s.id,s.name,s.age); 
    LINE 
} 
struct Student  inputData(student  s ) // step - 2  ( will scan the values from the user ) 
{ 
    LINE 
    printf("\n enter id : = "); 
    scanf("%d",&s.id); 
    printf("\n enter name: = "); 
    scanf("%s",s.name); 
    printf("\n enter age : = "); 
    scanf("%d",&s.age); 
    LINE 
    return s;// step - 3  
}