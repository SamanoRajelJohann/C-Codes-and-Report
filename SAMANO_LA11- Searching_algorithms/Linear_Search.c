#include <stdio.h>

int search(int arr[], int N, int x) {
    for (int i = 0; i < N; i++) 
        if (arr[i] == x) 
            return i; 
    return -1; 
}

void quickSort(int arr[], int low, int high) {
    if (low < high) {
        int pivot = arr[high];
        int i = (low - 1);
        for (int j = low; j <= high - 1; j++) {
            if (arr[j] < pivot) {
                i++;
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
        int temp = arr[i + 1];
        arr[i + 1] = arr[high];
        arr[high] = temp;

        quickSort(arr, low, i);
        quickSort(arr, i + 2, high);
    }
}

int main(void) {
    int arr[] = {2, 3, 4, 10, 40}; // Change for using different amount of Values
    int x;
    int N = sizeof(arr) / sizeof(arr[0]);

    printf("Input Element to Search For: ");
    scanf("%d", &x); 

    quickSort(arr, 0, N - 1);

    int result = search(arr, N, x);
    (result == -1) 
        ? printf("Element is not present in array.\n") 
        : printf("Element is present at index %d.\n", result);

    return 0;
}
