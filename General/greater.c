#include <stdio.h>

int main()

{
    int a, b, c, d;
    printf("Enter the value of a, b, c, d :");

    scanf("%d%d%d%d", &a, &b, &c, &d);
    if(a>b && a>c && a>c)
    {
        printf ("A = %d is greater...", a);
    }
    else if(b>c && b>a && b>d)
    {
        printf ("B = %d is greater...", b);
    }
    else if(c>a && c>b && c>d)
    {
        printf ("c = %d is greater...", c);
    }
    else if(d>a && d>b && d>c)
    {
        printf ("d = %d is greater...", d);
    }
    else{
        printf("All the values are same... !");
    }


    return 0;

}