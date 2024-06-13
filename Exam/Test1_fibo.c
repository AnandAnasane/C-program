#include <stdio.h>

int main ()
{
    int n, c, a = 0, b = 1;
    

    printf("\n Enter the Value: \n ");
    scanf("%d", &n);

    for (int i = 1; i<=n; i++ )
    {
        printf("%d \n", a);

        c = a + b;
        a = b;
        b = c;        
    }

return 0;

}

