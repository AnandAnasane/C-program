#include<stdio.h> 
#include<stdlib.h> 
#define LINE printf("\n ------------------------------------------ \n"); 
int main() 
{    
    LINE 
    char str[20]; 
    int a = 10 , b = 20 ; 
     
    FILE *file = fopen("Data.txt","w"); 
    if (file != NULL) 
    { 
        printf("\n the file is opened ...! \n"); 
         
        // printf("\n enter the string : = "); 
        // scanf("%s",str); 
        // // fputc('A',file);// prints a single character  
        // // for (int i = 0; str[i] != '\0'; i++) 
        // // { 
        // //     fputc(str[i],file); 
        // // } 
        // fputs(str,file); 
 
        // ------------------ fprintf -------------------- 
        fprintf(file,"hello this is fprintf function ...! "); 
        fprintf(file,"a = %d b = %d and a + b = %d ",a,b,a+b); 
 
        printf("\n the data has beeen printed to the file ..! \n"); 
    } 
    else 
    { 
        printf("\n Sorry we cant open the file ...! \n"); 
        exit(1); //  there is some problem because of which we are stopping the program forcefully 
    } 
     
    fclose(file); 
    printf("\n file is closed ...! \n"); 
    LINE 
    return 0 ; 
}