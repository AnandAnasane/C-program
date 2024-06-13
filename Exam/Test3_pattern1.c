# include <stdio.h>
#define LINE printf("\n ------------------- \n");

int main() {
    int n;

    LINE
    
    printf("Enter the number of lines: ");
    scanf("%d", &n);

    LINE
    LINE
    
    for (int i = 1; i <= n; i++) {
        int num = 1;
        
        for (int j = 1; j <= i; j++) {
            printf("%d ", num);
            num = 1 - num;
        }
        
        printf("\n");
    }

    LINE
    LINE
    return 0;
}