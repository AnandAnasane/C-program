// WAP to check whether the Element is present or not ?


#include <stdio.h>
#define LINE printf("\n -------------------------------------------------- \n");

int main()
{
    int arr[10] = {12, 22, 23, 43, 11, 87, 90, 56, 66, 9};
    int num;
    int found = 0;

    LINE

    printf("\n Enter the Element to check whether it is present or not:  \n");
    
    scanf("%d", &num);
    LINE
    for(int i; i < 10; i++)
    {
         printf("\n arr[%d] = is  %d \n", i, arr[i]);
    }
   

    LINE 
    
    for (int i = 0; i < 10; i++)
    {
        if(num == arr[i])
        {
            found = 1;
            break;
        }
       
    }
     if (found)
        {
            printf("\n  Element  %d is present \n", num);
        }
        else
        {
            printf("\n  Element %d is not present...! \n", num);
        }
    return 0;
}