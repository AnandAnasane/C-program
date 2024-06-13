# include <stdio.h>
# include <conio.h>

// WAP to accept no of km travelled and  calculate the fare.
// first 5 km - fare : 5 rs per km.
// next 5 km upto 10 km - fare : 7 rs per km.
// Above 10 km - fare : 10 rs per km.

int main()
{
int km, fare;

printf("Enter the Km you travelled : \n");
scanf("%d", &km);

    if(km<=5)
    {
        fare = km*5;
    }
        else if(km>5 && km<=10)
        {
            fare = (km-5)*7 + 25;
        }
        else if (km > 10)
        {
            fare = (km-10)*10 + 60;
        }
        printf("Total fare = %d", fare);
    return 0;
}



    
    // if (km>0 && km<=5)
    // {   int fare1= km*5;
    //     printf("Fare is %d ", fare1);
    // }
    // else if(km>5 && km<10)
    // {   int fare2 = (km-5)*7+25;
    //     printf("Fare is %d", fare2);
    // }
    // else if(km>10)
    // {
    //     int fare3 = (km-10)*10+60;
    //     printf("Fare is %d",fare3);
    // }
 

