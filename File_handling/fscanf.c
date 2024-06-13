#include<stdio.h> 
#include<stdlib.h> 
#define LINE printf("\n ------------------------------------------ \n"); 
int main() 
{    
    LINE 
    char str[20]; 
     
    int a , b ; 
    FILE *file = fopen("data1.txt","r"); 
    if (file != NULL) 
    { 
        printf("\n the file is opened ...! \n"); 
        // printf("\n using fgetc : = "); 
        // while (!feof(file)) 
        // { 
        //     printf("%c",fgetc(file)); 
        // } 
        // printf("\n using fget : = "); 
        // while (!feof(file)) 
        // { 
        //     printf("%s",fgets(str,10,file)); 
        // } 
 
        // ----------------------- fscanf ----------------- 
        fscanf(file,"%d%d%s",&a,&b,str); 
 
        printf("\n a = %d , b = %d , str = %s \n",a,b,str); 
 
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