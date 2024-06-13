//program to calculate number of vowels & consonants
#include<stdio.h>
int main(){
  char str[]="anand";
  int vowels = 0, consonants = 0; int i; 
    char ch; 

    for (i = 0; str[i] != '\0'; i++) { 

        ch = str[i]; 

        if (ch == 'a' || ch == 'e'
             || ch == 'i' || ch == 'o'||
             ch == 'u' || ch == 'A'||
             ch == 'E' ||  ch == 'I'||
             ch == 'O' ||  ch == 'U') 
            vowels++; 

        
        else{

            consonants++; }
    } 
    printf("\nVowels count=%d",vowels);
    printf("\nConsonants count=%d",consonants);




    return 0;
}