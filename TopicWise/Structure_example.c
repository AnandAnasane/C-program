#include<stdio.h> 
// practice example of structure 
#define LINE printf("\n ------------------------------------------------- \n"); 
struct Book 
{ 
    int bookId; 
    char bookName[20]; 
    int bookPrice; 
}; 
struct Book inputData(struct Book); 
void outputData(struct Book); 
int main() 
{ 
    struct Book b1; // variable of the structure  
 
    struct Book b = inputData(b1); 
    outputData(b); 
 
    return 0 ;  
} 
struct Book inputData(struct Book b) 
{ 
    LINE 
    printf("\n enter Book Id : = "); 
    scanf("%d",&b.bookId); 
    printf("\n enter Book name : = "); 
    scanf("%s",&b.bookName); 
    printf("\n enter Book Price : = "); 
    scanf("%d",&b.bookPrice); 
    LINE 
    return b ; 
} 
void outputData(struct Book b ) 
{ 
    LINE 
    printf("\n Id = %d ",b.bookId); 
    printf("\n Name = %s ",b.bookName); 
    printf("\n Price = %d ",b.bookPrice); 
    LINE 
}