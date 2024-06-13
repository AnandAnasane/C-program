//  WAP to reverse the array.

#include <stdio.h>
int main()
{
    int size, i;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int arr[size];

    printf("Enter elements:\n");
    for (i = 0; i < size; i++)
    {
        printf("\n", i + 1);
        scanf("%d", &arr[i]);
    }

    int a = 0;
    int b = size - 1;
    int temp;

    while (a < b)
    {

        temp = arr[a];
        arr[a] = arr[b];
        arr[b] = temp;
        a++;
        b--;
    }

    printf("\nReversed array is: ");
    for (i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}
