#include<stdio.h> 
#include<string.h> // header file for string  
#define LINE printf("\n ------------------------------------------ \n"); 
int main() 
{ 
    char str1[20] = "mahabharat"; 
    char str2[20] = "ramayana"; 
    printf("\n the length of the string is : = %d \n",strlen(str1)); 
 
    // to copy the str2 in str1 
    // strcpy(str1,str2); 
 
    // to concatenate  
    // strcat(str1,str2); 
 
    // printf("\n str1 = %s  \n",str1); 
    // printf("\n str2 = %s  \n",str2); 
 
    // to compare  
 
    char s1[] = "abc"; 
    char s2[] = "Abc"; 
     
    int isSame = strcmp(s1,s2); // returns 0 if same or returns 1 is different 
    if (isSame == 0 ) 
    { 
        printf("\n Same ....! \n"); 
    } 
    else 
    { 
        printf("\n Different ....! \n"); 
    } 
 
    return 0 ; 
}