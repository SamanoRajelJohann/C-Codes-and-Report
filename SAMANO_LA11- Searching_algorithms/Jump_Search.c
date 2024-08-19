#include <stdio.h>
#include <math.h>
#include <time.h>  

int jumpsearch(int arr[], int x, int n) {
    int step = sqrt(n);  
    int prev = 0;
    while (arr[(int)fmin(step, n) - 1] < x) {  
        prev = step;
        step += sqrt(n);
        if (prev >= n)
            return -1;
    }
    while (arr[prev] < x) {
        prev++;
        if (prev == (int)fmin(step, n))
            return -1;
    }
    if (arr[prev] == x)
        return prev;
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
    int arr[] = {69, 10, 50, 96, 8, 84}; // Change for using different amount of Values
    int x;
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Input Element to Search For: ");
    scanf("%d", &x);

    quickSort(arr, 0, n - 1);

    clock_t start = clock();  // Start the timer
    int result = jumpsearch(arr, x, n);
    clock_t end = clock();    // End the timer

    if (result == -1) {
        printf("Element is not present in array.\n");
    } else {
        printf("Element is present at index %d.\n", result);
    }

    double time_taken = (double)(end - start) / CLOCKS_PER_SEC;
    printf("Execution time: %f seconds\n", time_taken);

    return 0;
}
