#include <stdio.h>
#include <time.h>
#include <math.h>
#include <stdbool.h>
#include <stdlib.h> 

void quicksortMiddle(int arr[], int low, int high) {
    if (low < high) {
        int pivot = arr[(low + high) / 2];
        int i = low;
        int j = high;
        int temp;
        while (i <= j) {
            while (arr[i] < pivot) i++; 
            while (arr[j] > pivot) j--; 

            if (i <= j) {
                temp = arr[i];         
                arr[i] = arr[j];
                arr[j] = temp;
                i++;
                j--;
            }
        }
        if (low < j) quicksortMiddle(arr, low, j);
        if (i < high) quicksortMiddle(arr, i, high);
    }
}

void printArray(int arr[], int size){
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main(int argc, char* argv[]){
    int n = argc - 1; 
    int arr[n];      
    for (int i = 1; i <= n; ++i) {
        arr[i - 1] = atoi(argv[i]); 
    }
    quicksortMiddle(arr, 0, n - 1);
    printArray(arr, n);
    return 0;
}