// Menu driven programme--- The programme will execute in a loop until its value bacomes false.


#include<stdio.h> 
#define LINE printf("\n ------------------------------------ \n"); 
float PI = 3.14;// global varible
void AreaOfCircle(); 
void AreaOfSphere(); 
void AreaOfRectangle(); 
int main() 
{ 
    LINE 
    int choice; 
    do  
    { 
        printf("\n 1 : for calculate Area of Circle \n"); 
        printf("\n 2 : for calculate Area of Sphere \n"); 
        printf("\n 3 : for calculate Area of rectangle \n"); 
         
        LINE 
        printf(" \n enter your choice \n"); 
        scanf("%d",&choice); 
        LINE 
        switch(choice) 
        { 
            //printf("\n hey it's menu driven program .....!\n");// its never will be executed 
            case 1: 
                    LINE 
                    AreaOfCircle(); 
                    LINE 
                    break; 
            case 2: 
                    LINE 
                    AreaOfSphere(); 
                    LINE 
                    break; 
            case 3: 
                    LINE 
                    AreaOfRectangle(); 
                    LINE 
                    break; 
            default :  
                    LINE 
                    printf(" \n SORRY ......! you have entered Invalid input \n"); 
                    LINE 
        } 
    }while(choice != 0); 
    printf("\n End of Main() ..! \n"); 
    LINE  
    return 0; 
} 
void AreaOfCircle() 
{ 
    int radius; 
    printf("\n enter radius for circle \n"); 
    scanf("%d",&radius); 
    printf("\n Area of circle is : %f \n",PI * radius * radius );                                                                                           
} 
void AreaOfSphere() 
{ 
    int radius; 
    printf("\n enter radius for sphere \n"); 
    scanf("%d",&radius); 
    printf("\n Area of sphere is : %f \n",4 * PI * radius * radius ); 
} 
void AreaOfRectangle() 
{ 
    int length , width; 
    printf("\n enter length and width \n "); 
    scanf("%d%d",&length,&width); 
    printf("\n Area of rectangle is : %d \n",length * width ); 
}