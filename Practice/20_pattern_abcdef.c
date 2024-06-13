#include <stdio.h>

int main()
{
    int n, i, j;
    char ch = 'a';

    printf("Enter the values");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("%c ", ch);
        }
        printf("\n");
        ch++;
    }

    return 0;
}

// output

// a
// b b
// c c c
// d d d d
// e e e e e
// f f f f f f

// for (i = 1; i <= n; i++) {
//     for (j = 1; j <= i; j++) {
//         printf("%c ", ch);
//         ch++;

//     }
//     printf("\n");

// }
// OUTPUT

// a
// b c
// d e f
// g h i j
// k l m n o
// p q r s t u
