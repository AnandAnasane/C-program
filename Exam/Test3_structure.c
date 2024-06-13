# include <stdio.h>
#include <string.h>
#define LINE printf("\n ----------------------------------------- \n");

struct car{
    int id;
    char name[20];
    char fuelType[10];
    int capacity;

}car;

int main()
{
   struct  car c;
        // INPUT
        printf("Enter the car Id: ");
        scanf("%d", &c.id);

        printf("Enter the name of car: ");
        scanf("%s", &c.name);

        printf("Enter thefuel type: ");
        scanf("%s", &c.fuelType);
        
        printf("Enter car Capacity: ");
        scanf("%d", &c.capacity);

        LINE
    
        //OUTPUT
   
        printf("ID:  %d \n", c.id);
        printf("NAME: %s \n", c.name);
        printf("Age:  %s \n", c.fuelType);
        printf("Age:  %d \n", c.capacity);
        LINE


    return 0;
}
