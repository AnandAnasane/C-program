# include <stdio.h>

double boxSize (double len,double width,double height)
{
    return len*width*height;

}

int main ()
{
    double len, width, height ;

    printf("Enter the value \n");

    scanf("%lf",&len);
    scanf("%lf",&width);
    scanf("%lf",&height);
    
    printf("%lf", boxSize (len,width,height));


    return 0;

}