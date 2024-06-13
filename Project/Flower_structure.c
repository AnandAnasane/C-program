//  create the structure of n  Flowers ( id , name , color ) and display the info of the n flowers

#include <stdio.h>
#include <string.h>
#define LINE printf("\n --------------------------------------------------------- \n");

typedef struct flower{
    
    int id;
    char name[20];
    char color[20];

}flower;

int main()
{
    int n;

    printf("Enter the varieties of flower: ");
    scanf("%d", &n);


    flower f[n];

    for(int i = 0; i < n; i++)
    {
        LINE

        printf("Enter the ID of Flower: ");
        scanf("%d", &f[i].id);

        printf("Enter the Name of Flower: ");
        scanf("%s", &f[i].name);

        printf("Enter the color of flower: ");
        scanf("%s", &f[i].color);

        LINE

    }

     printf("\n ------FLOWER INFORMATION--------- \n");

    for (int i = 0; i < n; i++)
    {
        LINE

        printf("ID: %d \n", f[i].id);
        printf("NAME: %s \n", f[i].name);
        printf("COLOR: %s \n", f[i].color);

        LINE
    }
    
   
    return 0;
}