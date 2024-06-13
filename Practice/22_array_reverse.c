#include <stdio.h>

void reverseArray(int arr[], int size) {
    int start = 0;
    int end = size - 1;
    int temp;

    // Reverse the array elements
    while (start < end) {
        // Swap elements at start and end indices
        temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        // Move start index towards end and end index towards start
        start++;
        end--;
    }
}

int main() {
    int size, i;

    // Input the size of the array
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int arr[size];

    // Input array elements
    printf("Enter %d elements of the array:\n", size);
    for (i = 0; i < size; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    // Reverse the array
    reverseArray(arr, size);

    // Print the reversed array
    printf("\nReversed array: ");
    for (i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
