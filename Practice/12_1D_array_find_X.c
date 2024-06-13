// WAP to find variable in array with user defined

# include <stdio.h>

int main()
{
    int arr[10] = {11, 22, 33, 44, 55, 66, 77, 88, 99};

    int n;
    int found = 0;
    printf("Enter the value to check present or not: ");
    scanf("%d", &n);

    for(int i= 0; i <= 10; i++)
    {
        if(n == arr[i])
        {
            found = 1;
            break;
        }
    }
    if(found)
    {
        printf("%d is present", n);
    }
    else{
        printf("%d is absent", n);
    }

    return 0;
}