#include<stdio.h> 
#include<string.h> 
// union example : - 2  
// In union the last value assigned will be printed nomatter whta is their data types.
union Fruit 
{ 
    int id ; 
    char name[20]; 
    char color[10]; 
}; 
int main() 
{ 
    union Fruit mango; 
 
    printf("\n size : = %d" ,sizeof(mango)); 
 
    mango.id =1001; 
    strcpy(mango.name,"Kesar"); 
    strcpy(mango.color,"redish"); 
     
    printf("\n ------------------------- info -------------------------------------- \n"); 
    printf("\n id = %d",mango.id); 
    printf("\n name = %s",mango.name); 
    printf("\n color = %s",mango.color); 
 
    return 0 ;  
}