# include <stdio.h>

void evenOdd (int a)
{
    if (a % 2 == 0)
    {
        printf("A is Even");
    }
    else 
    {
        printf("A is Odd");
    }
}

int main ()

{
evenOdd(11);

return 0;
}