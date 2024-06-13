#include <stdio.h>
int main ()


//  Mathematical operations


 {
    int a,b,add,sub,mul;
    float div;
    float d = 1.33;

    printf("Enter the value of A :\n");
    scanf("%d", &a);
    printf("Enter the value of B :\n");
    scanf("%d", &b);
    add = a+b;
    sub = a-b;
    mul = a*b;
   

    if (a>b)
    {
        div = a/b;
    }

    else
    {
        div = b/a;
    }

    printf("The final result is: \n%d\n%d\n%d\n%f\n",add,sub,mul,div);
    printf("The final result is: %f\n", d);


    return 0;
}
