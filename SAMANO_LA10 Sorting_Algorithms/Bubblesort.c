#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h> 

void swap(int* xp, int* yp){
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

void bubbleSort(int arr[], int n){
    int i, j;
    bool swapped;
    for (i = 0; i < n - 1; i++) {
        swapped = false;
        for (j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(&arr[j], &arr[j + 1]);
                swapped = true;
            }
        }
        if (swapped == false)
            break;
    }
}

void printArray(int arr[], int size){
    int i;
    for (i = 0; i < size; i++)
        printf("%d ", arr[i]);
}

int main(int argc, char* argv[]){
    int n = argc - 1; 
    int arr[n];       

    for (int i = 1; i <= n; ++i) {
        arr[i - 1] = atoi(argv[i]);
    }

    bubbleSort(arr, n);
    printArray(arr, n);
    return 0;
}