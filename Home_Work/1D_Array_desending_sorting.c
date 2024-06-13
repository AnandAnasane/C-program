// 1D array in desending order

# include <stdio.h>

int main()
{
    int arr[10] = {11, 22, 33, 44, 55, 66, 77, 88, 99};
    int n = 10;
    int i, j, temp;

    for(i = 0; i < 10; i++)
    {
        for(j = i+1; j < n; j++)
        {
            temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }
    for(i = 1; i < n; i++)
    {
        printf("%d, ", arr[i]);
    }
    return 0;
}