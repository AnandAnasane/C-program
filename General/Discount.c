#include<stdio.h>

// WAP to get discount on cp
// shopping upto 5000 = discount 5%
// shopping upto 10000 = discount 10%
// shopping above 10000 = discount 15%

int main()
{
    int cp;
    float dis,final_price;

    printf("Enter the cost price = ");
    scanf("%d", &cp);

    if (cp<=5000)
    {
        dis = (5.0/100.0)*cp;
    }
    else if (cp>5000 && cp<=10000)
    {
         dis = (10.0/100.0)*cp;
    }
    else if (cp>10000)
    {
         dis = (15.0/100.0)*cp;
    }
     

    printf("Total Cost price : %d \n",cp);
    printf("Total discounted amount : %f \n", dis);
    final_price = cp-dis;
    printf("Final Amount : %f \n", final_price);
    
   

    return 0;
}