#include <stdio.h>
int main()

{
    int i;

    for (i = 1; i <= 50; i++)

    {
        
        if (i%3 ==0 && i%5 == 0 )
    {
        printf("%d--C Language \n",i);
    }
    else if(i % 5 == 0)
    {
        printf("%d--C \n",i);
    }
    else if(i % 3 == 0)
    {
        printf("%d--Language \n", i);
    }


    }

    return 0;
}